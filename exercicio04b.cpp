/*
Crie uma variável pif de tipo float e atribua a ela o valor da
constante pi com o maior número de casas decimais que você consiga
achar na Internet. Imprima este valor na tela.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    // Atribui o valor de pi à variável pif
    float pif = M_PI;

    // Imprime o valor de pi com a maior precisão disponível para float
    cout << "Valor de pi em float: " << pif << endl;

    return 0;
}
