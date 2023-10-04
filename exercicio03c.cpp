/*
Crie uma variável li, de tipo long int, atribua a ela o valor da
variável uli e depois atribua novamente a uli o valor armazenado
em li. O que acontece e por que? Mostre o resultado na tela e
coloque suas considerações num comentário no código.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
   
    unsigned long int uli;
    long int li;

    // Atribui o maior valor representável por um unsigned long int a uli
    uli = numeric_limits<unsigned long int>::max();

    // Atribui o valor de uli a li
    li = uli;

    // Atribui o valor de li de volta a uli
    uli = li;

    // Imprime os valores de uli e li
    cout << "uli: " << uli << endl;
    cout << "li: " << li << endl;

    return 0;
}
