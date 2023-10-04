/*
b. Modifique o exercício anterior para que a saída imprima também o
código numérico em octal e em hexadecimal.*/

#include <iostream>

using namespace std;

int main() {
  
    // Loop de '0' a '9'
    for (char c = '0'; c <= '9'; ++c) {
        // Imprime o caractere e seu código numérico em decimal, octal e hexadecimal
        /*
        Neste trecho do código utilizo um operador de fundição chamado
        static_cast para tornar a conversão segura e explícita.
        */
        cout << "'" << c << "' - " << static_cast<int>(c) << " (Decimal), "

        /*
        Neste trecho do código utilizo manipuladores de saída oct e hex do objeto cout
        */
             << oct << static_cast<int>(c) << " (Octal), "
             << hex << static_cast<int>(c) << " (Hexadecimal)" << endl;
    }

    return 0;
}
