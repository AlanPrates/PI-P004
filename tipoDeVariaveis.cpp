#include <iostream>
#include <string>

using namespace std;

int main()
{
    char character;

    for (int num = 48; num <= 57; num++)
    {
        character = num;

        cout << " O valor de " << character << " em decimal: " << dec << int(character) << endl;

        cout << "O valor de  " << character << " em octal: " << oct << int(character) << endl;

        cout << " O valor de " << character << " em hexadecimal: " << hex << int(character) << endl;

        cout << endl;
    }

    cout << "###################### Inserindo um valor #######################" << endl;

    cout << "Insira um caractere: " << endl;
    cin >> character;

    cout << " O valor de " << character << " em decimal: " << dec << int(character) << endl;

    cout << "O valor de  " << character << " em octal: " << oct << int(character) << endl;

    cout << " O valor de " << character << " em hexadecimal: " << hex << int(character) << endl;

    cout << endl;

    // Solucionando a questão "D" da atividade.

    // Utilizamos a variável do tipo wchar_t para armazenar caracteres unicode
    // Podendo adicionar "ç" ou "ã" como pede a questão
    wchar_t special_character = L'ç';

    wcout << wstring(1, special_character) << endl;

    return 0;
}
