/*
Crie uma variável ui, de tipo unsigned int, atribua a ela o valor
da variável li e depois atribua novamente a li o valor armazenado
em ui. O que acontece e por que? Mostre o resultado na tela e
coloque suas considerações num comentário no código.
*/

#include <iostream>
#include <climits> 

using namespace std;

int main() {
  
    long int li = -42;
    unsigned int ui;

    // Atribui o valor de li a ui
    ui = li;

    // Atribui o valor de ui de volta a li
    li = ui;

    cout << "li: " << li << endl;
    cout << "ui: " << ui << endl;

    return 0;
}
