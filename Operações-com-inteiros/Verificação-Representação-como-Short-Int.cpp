#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    string resultado = (numero > SHRT_MAX || numero < SHRT_MIN) ? "e maior que um short int" : "este valor pertence ao intervalo dos short int";

    cout << numero << " " << resultado << endl;

    return 0;
}
