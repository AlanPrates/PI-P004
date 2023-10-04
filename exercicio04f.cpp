/*
No seu sistema existe diferença entre o tipo double e long double?
Mostre seu achado com algum exemplo dentro do seu código.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    // Atribui o valor de pi às variáveis pid (double) e lid (long double)
    double pid = M_PI;
    long double lid = M_PI;

    // Define a precisão da saída
    int precisao = 30;

    // Configura a precisão para a saída
    cout << fixed << setprecision(precisao);

    cout << "Valor de pi em double: " << pid << endl;
    cout << "Valor de pi em long double: " << lid << endl;

    return 0;
}
