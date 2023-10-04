/*
Sobre o tipo float identifique qual o menor e o maior valor que
pode ser representado por uma variável deste tipo. Mostre esta
informação na tela.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    

    cout << "Menor valor representável por um float: " << numeric_limits<float>::min() << endl;
    cout << "Maior valor representável por um float: " << numeric_limits<float>::max() << endl;

    return 0;
}
