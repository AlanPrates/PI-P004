/*
c. Acrescente ao código do exercício anterior a possibilidade de ler um
caractere qualquer e imprima no mesmo formato do inciso anterior.
*/

#include <iostream>

using namespace std;

int main() {
   

    char enterChar;

    // Solicita ao usuário para inserir um caractere
    cout << "Digite um caractere: ";
    cin >> enterChar;

    // Imprime o caractere e seu código numérico em decimal, octal e hexadecimal
    cout << "'" << enterChar << "' - " << static_cast<int>(enterChar) << " (Decimal), "
         << oct << static_cast<int>(enterChar) << " (Octal), "
         << hex << static_cast<int>(enterChar) << " (Hexadecimal)" << endl;

    return 0;
}
