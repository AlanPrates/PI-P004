/*
Crie uma variável pid de tipo double e atribua a ela o valor da
constante pi com o maior número de casas decimais que você consiga
achar na Internet. Imprima este valor na tela.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    // Atribui o valor de pi à variável pid
    double pid = M_PI;

    // Define a precisão da saída para um número elevado de casas decimais
    cout << fixed << setprecision(50) << "Valor de pi em double: " << pid << endl;

    return 0;
}
