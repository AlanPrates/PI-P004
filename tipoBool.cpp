/*
    Exercício 5: Variáveis de tipo Bool.
    As variáveis de tipo bool podem assumir valores true ou false. Elas
    serão amplamente utilizadas nos próximos tópicos. Entretanto, outros tipos
    de dados podem ser utilizados no lugar de valores bool e seus valores são
    convertidos em true ou false.

    a. Faça uma aplicação que mostre como os diversos tipos que foram
    estudados até aqui são convertidos em true ou false.
*/

#include <iostream>

using namespace std;

int main(){

    int testeInt = 1;
    float testeFloat = 2.0;
    double testeDouble = 3.0;
    char testeChar = 'a';
    long int testeLI = 9223372036854775807;

    // Dependendo da condição a estrutura vai retornar 1 ou 0 -> True ou False.

    //               teste ? se verdadeiro : se falso
    bool isInt = (testeInt == 1) ? true : false; // Verdadeiro! Retorna 1.
    bool isFloat = (testeFloat == 0.0) ? true : false; // Falso! Retorna 0.
    bool isChar = (testeChar == 'a') ? true : false; // Verdadeiro! Retorna 1.
    bool isLongInt = (testeLI == -1) ? true : false; // Falso! Retorna 0.
    bool isDouble = (testeDouble == 3.0) ? true : false; // Verdadeiro! Retorna 1.
                   
    cout << "Teste com o tipo int, valor em bool: " << isInt << endl; 
    cout << "Teste com o tipo float, valor em bool: " << isFloat << endl;
    cout << "Teste com o tipo char, valor em bool: " << isChar << endl;  
    cout << "Teste com o tipo long int, valor em bool: " << isLongInt << endl;
    cout << "Teste com o tipo double, valor em bool: " << isDouble << endl;

    return 0;
}