/*Exercício 5: Variáveis de tipo Bool
● As variáveis de tipo bool podem assumir valores true ou false. Elas
serão amplamente utilizadas nos próximos tópicos. Entretanto, outros tipos
de dados podem ser utilizados no lugar de valores bool e seus valores são
convertidos em true ou false. 
a. Faça uma aplicação que mostre como os diversos tipos que foram
estudados até aqui são convertidos em true ou false.*/
#include <iostream>

using namespace std;

int main() {
    // Tipos numéricos
    int numeroInteiro = 42;
    float numeroFloat = 0.0;
    double numeroDouble = 3.14159;

    if (numeroInteiro) {
        cout << "O valor de numeroInteiro é avaliado como true." << endl;
    } else {
        cout << "O valor de numeroInteiro é avaliado como false." << endl;
    }

    if (numeroFloat) {
        cout << "O valor de numeroFloat é avaliado como true." << endl;
    } else {
        cout << "O valor de numeroFloat é avaliado como false." << endl;
    }

    if (numeroDouble) {
        cout << "O valor de numeroDouble é avaliado como true." << endl;
    } else {
        cout << "O valor de numeroDouble é avaliado como false." << endl;
    }

    // Tipo char
    char caractere = 'A';

    if (caractere) {
        cout << "O valor de caractere é avaliado como true." << endl;
    } else {
        cout << "O valor de caractere é avaliado como false." << endl;
    }

    // Tipo bool
    bool valorBool = true;

    if (valorBool) {
        cout << "O valor de valorBool é avaliado como true." << endl;
    } else {
        cout << "O valor de valorBool é avaliado como false." << endl;
    }

    return 0;
}
