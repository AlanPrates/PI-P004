/*
Identifique se existe alguma diferença entre o valor pif e pid quando
seus valores são impressos com cout utilizando 2, 4, 8 e 16 casas
decimais
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   
    // Atribui o valor de pi às variáveis pif e pid
    float pif = M_PI;
    double pid = M_PI;

    // Define as precisões da saída
    int precisoes[] = {2, 4, 8, 16};

    // Loop através das diferentes precisões
    for (int precisao : precisoes) {
        cout << "Precisão de saída: " << precisao << " casas decimais" << endl;
        
        // Configura a precisão para a saída
        cout << fixed << setprecision(precisao);
        
        cout << "pif (float): " << pif << endl;
        cout << "pid (double): " << pid << endl;
        
        cout << "Diferença entre pif e pid: " << pif - pid << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
