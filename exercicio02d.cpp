/*
d. Pesquise como fazer para armazenar uma variável os caracteres
especiais ?ç? e ?ã?. Acrescente no código do exercício anterior um
exemplo que demonstra como usar este recurso.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    
    // Configura a localização para suportar caracteres especiais
    setlocale (LC_ALL, "Portuguese_Brazil"); 

    wchar_t enterChar;

    // Solicita ao usuário para inserir um caractere
    wcout << "Digite um caractere especial (exemplo: ç, ã): ";
    wcin >> enterChar;

    // Imprime o caractere e seu código numérico em decimal, octal e hexadecimal
    wcout << L"'" << enterChar << L"' - " << static_cast<int>(enterChar) << L" (Decimal), "
          << oct << static_cast<int>(enterChar) << L" (Octal), "
          << hex << static_cast<int>(enterChar) << L" (Hexadecimal)" << endl;

    return 0;
}
