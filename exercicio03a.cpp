/*
Sobre o tipo int identifique qual o menor e o maior valor que pode
ser representado por uma variável deste tipo. Mostre esta informação
na tela.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    /*
    Aqui estou utiliznado a classe numeric_limits para obter
    o valor máximo e mínimo de um inteiro.
    */
    cout << "Maior valor representável por um 'inteiro': " << numeric_limits<int>::max() << endl;
    cout << "Menor valor representável por um 'inteiro': " << numeric_limits<int>::min() << endl;

    return 0;
}
