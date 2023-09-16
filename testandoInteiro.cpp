/*Exercício 3: Manipulação de variáveis de tipo inteiro, explorando os limites.
● Durante a aula foi apresentado o tipo de dado int e suas variações, que
permitem representar um subconjunto dos números inteiros. Sobre estes
tipos de dados crie uma aplicação que:
a. Sobre o tipo int identifique qual o menor e o maior valor que pode
ser representado por uma variável deste tipo. Mostre esta informação
na tela.
b. Crie uma variável uli, de tipo unsigned long int, atribua a ela
o maior valor que pode ser armazenado neste tipo de dado
(identifique qual o menor e o maior valor que pode ser representado);
c. Crie uma variável li, de tipo long int, atribua a ela o valor da
variável uli e depois atribua novamente a uli o valor armazenado
em li. O que acontece e por que? Mostre o resultado na tela e
coloque suas considerações num comentário no código.
d. Atribua a li o maior valor que pode ser armazenado num long
int (identifique qual o menor e o maior valor que pode ser
representado);
e. Crie uma variável ui, de tipo unsigned int, atribua a ela o valor
da variável li e depois atribua novamente a li o valor armazenado
em ui. O que acontece e por que? Mostre o resultado na tela e
coloque suas considerações num comentário no código.
f. Atribua a ui o maior valor que pode ser armazenado num
unsigned int (identifique qual o menor e o maior valor que pode
ser representado)*/
#include <iostream>
#include <limits>

using namespace std;

int main()
{

    int menorInt = numeric_limits<int>::min();
    int maiorInt = numeric_limits<int>::max();

    cout << "Menor valor de int: " << menorInt << endl;
    cout << "Maior valor de int: " << maiorInt << endl;

    unsigned long int uli = numeric_limits<unsigned long int>::max();
    unsigned long int menorUli = numeric_limits<unsigned long int>::min();
    cout << "Menor valor de unsigned long int: " << menorUli << endl;
    cout << "Maior valor de unsigned long int: " << uli << endl;

    long int li = uli;
    uli = li;

    cout << "li após a atribuição: " << li << endl;
    cout << "uli após a atribuição: " << uli << endl;

    li = numeric_limits<long int>::max();
    long int menorLi = numeric_limits<long int>::min();
    cout << "Menor valor de long int: " << menorLi << endl;
    cout << "Maior valor de long int: " << li << endl;

    unsigned int ui = li;
    li = ui;

    cout << "ui após a atribuição: " << ui << endl;
    cout << "li após a atribuição: " << li << endl;

    ui = numeric_limits<unsigned int>::max();
    unsigned int menorUi = numeric_limits<unsigned int>::min();
    cout << "Menor valor de unsigned int: " << menorUi << endl;
    cout << "Maior valor de unsigned int: " << ui << endl;

    return 0;
}
