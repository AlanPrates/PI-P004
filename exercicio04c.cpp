/*
Explore as formas de formatar a saída com o comando cout e
modifique a quantidade de casas decimais que são apresentadas para
2, 4, 8 e 16.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    // Atribui o valor de pi à variável pif
    float pif = M_PI;

    // Define a precisão da saída para 2 casas decimais
    cout << "Precisão de saída: 2 casas decimais" << endl;
    cout << fixed << setprecision(2) << pif << endl;

    // Define a precisão da saída para 4 casas decimais
    cout << "Precisão de saída: 4 casas decimais" << endl;
    cout << fixed << setprecision(4) << pif << endl;

    // Define a precisão da saída para 8 casas decimais
    cout << "Precisão de saída: 8 casas decimais" << endl;
    cout << fixed << setprecision(8) << pif << endl;

    // Define a precisão da saída para 16 casas decimais
    cout << "Precisão de saída: 16 casas decimais" << endl;
    cout << fixed << setprecision(16) << pif << endl;

    return 0;
}
