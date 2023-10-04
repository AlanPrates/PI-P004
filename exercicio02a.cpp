/*
Os caracteres numéricos aparecem na tabela ASCII, e em outras, numa
sequência que começa pelo caractere ‘0’ até o caractere ‘9’. As variáveis de
tipo caractere podem ser tratadas também como valores numéricos. Com
base nestas afirmações desenvolva um programa em C++ que:
a. Imprima na tela, utilizando cout, cada um dos caracteres numéricos
e seu correspondente código numérico. Como modificar o
comportamento do cout para imprimir um objeto de tipo char como
caractere e como número?
i. Exemplo: ‘0’ - 48
‘1’ - 49
…
‘9’ - 57
*/

#include <iostream>

using namespace std;

int main() {
    
    // Loop de '0' a '9'
    for (char c = '0'; c <= '9'; ++c) {
        // Imprime o caractere e seu código numérico
        /*
        Neste trecho do código utilizo um operador de fundição chamado
        static_cast para tornar a conversão segura e explícita.
        */
        cout << "'" << c << "' - " << static_cast<int>(c) << endl;
    }

    return 0;
}
