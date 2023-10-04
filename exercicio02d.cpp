/*
d. Pesquise como fazer para armazenar uma vari�vel os caracteres
especiais ?�? e ?�?. Acrescente no c�digo do exerc�cio anterior um
exemplo que demonstra como usar este recurso.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    
    // Configura a localiza��o para suportar caracteres especiais
    setlocale (LC_ALL, "Portuguese_Brazil"); 

    wchar_t enterChar;

    // Solicita ao usu�rio para inserir um caractere
    wcout << "Digite um caractere especial (exemplo: �, �): ";
    wcin >> enterChar;

    // Imprime o caractere e seu c�digo num�rico em decimal, octal e hexadecimal
    wcout << L"'" << enterChar << L"' - " << static_cast<int>(enterChar) << L" (Decimal), "
          << oct << static_cast<int>(enterChar) << L" (Octal), "
          << hex << static_cast<int>(enterChar) << L" (Hexadecimal)" << endl;

    return 0;
}
