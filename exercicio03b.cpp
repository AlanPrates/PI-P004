/*
Crie uma variável uli, de tipo unsigned long int, atribua a ela
o maior valor que pode ser armazenado neste tipo de dado
(identifique qual o menor e o maior valor que pode ser representado);
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    unsigned long int uli;

    // Obtenha o maior valor representável por um unsigned long int
    uli = numeric_limits<unsigned long int>::max();

    cout << "Menor valor representável por um unsigned long int: " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Maior valor representável por um unsigned long int: " << uli << endl;

    return 0;
}
