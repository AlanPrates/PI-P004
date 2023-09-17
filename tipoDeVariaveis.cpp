/*
    Breve resumo da atividade!

    Desenvolver um programa em C++ que:

    a. Imprima na tela, utilizando cout, cada um dos caracteres numéricos e
    seu correspondente código numérico.

    b. Modificar o programa para que a saída imprima também o código
    numérico em octal e em hexadecimal.

    c. Acrescente ao código a possibilidade de ler um caractere qualquer 
    e imprima no mesmo formato do inciso anterior.

    d. Pesquisar como armazenar em uma variável os caracteres especiais ‘ç’ e ‘ã’. Acrescente no código um exemplo que demonstra como usar este recurso. 

*/

#include <iostream>
#include <string>
#include <unistd.h> // Incluindo o cabeçalho para utilizar o sleep().

using namespace std;

int main(){

    char caractere;

    cout << "-=-=-  TABELA ASCII  -=-=-\n";

    // Resolução das letras 'a' e 'b'.
    for (int i = '0' ; i <= '9' ; i++){
        sleep(1);
        cout << "\v------- " << char(i) << " -------\n";
        cout << "Decimal: " << dec << i << endl;
        cout << "Octal: " << oct << i << endl;
        cout << "Hexadecimal: " << hex << i << endl;
    }

    // Resolução da letra 'c'.
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    cout << "\vEntre com um caractere: ";
    cin >> caractere;

    cout << "\v------- " << caractere << " -------\n";
    cout << "Decimal: " << int(caractere) << endl;
    cout << "Octal: " << oct << int(caractere) << endl;
    cout << "Hexadecimal: " << hex << int(caractere) << endl;

    // Resolução da letra 'd'. 
    // O "wchar_t" cria uma variável capaz de armazenar um caractere especial e a letra "L" antes das aspas indica que estamos criando uma unicode. Para fazer a impressão utilizamos o "wcout", que é uma versão do cout adequadao para imprimir caracteres unicode/especiais.
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    wchar_t caractereEspecial = L'ã';
    wcout << "Imprimindo o caractere especial: " << caractereEspecial << endl;

    return 0;
}