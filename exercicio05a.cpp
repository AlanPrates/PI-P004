/*
As variáveis de tipo bool podem assumir valores true ou false. Elas
serão amplamente utilizadas nos próximos tópicos. Entretanto, outros tipos
de dados podem ser utilizados no lugar de valores bool e seus valores são
convertidos em true ou false.
Faça uma aplicação que mostre como os diversos tipos que foram
estudados até aqui são convertidos em true ou false.
*/

#include <iostream>

using namespace std;

int main() {
   
    int intValue = 42;
    double doubleValue = 3.14;
    char charValue = 'A';
    bool boolValue = true;

    // Convertendo int para bool
    bool intToBool = intValue; // intValue não é zero, portanto é true

    // Convertendo double para bool
    bool doubleToBool = doubleValue; // doubleValue não é zero, portanto é true

    // Convertendo char para bool
    bool charToBool = charValue; // charValue não é zero, portanto é true

    // Convertendo bool para bool (nenhuma conversão)
    bool boolToBool = boolValue; // boolValue já é booleano

    cout << "int para bool: " << intToBool << endl;
    cout << "double para bool: " << doubleToBool << endl;
    cout << "char para bool: " << charToBool << endl;
    cout << "bool para bool: " << boolToBool << endl;

    return 0;
}
