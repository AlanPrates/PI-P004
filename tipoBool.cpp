#include <iostream>

using namespace std;

int main()
{
    // Tipos numéricos
    int inteiro = 42;
    float flutuante = 0.0;
    double duplo = 3.14159;

    if (inteiro)
    {
        cout << "O valor de inteiro é avaliado como true." << endl;
    }
    else
    {
        cout << "O valor de inteiro é avaliado como false." << endl;
    }

    if (flutuante)
    {
        cout << "O valor de flutuante é avaliado como true." << endl;
    }
    else
    {
        cout << "O valor de flutuante é avaliado como false." << endl;
    }

    if (duplo)
    {
        cout << "O valor de duplo é avaliado como true." << endl;
    }
    else
    {
        cout << "O valor de duplo é avaliado como false." << endl;
    }

    // Tipo char
    char caractere = 'A';

    if (caractere)
    {
        cout << "O valor de caractere é avaliado como true." << endl;
    }
    else
    {
        cout << "O valor de caractere é avaliado como false." << endl;
    }

    // Tipo bool
    bool booleano = true;

    if (booleano)
    {
        cout << "O valor de booleano é avaliado como true." << endl;
    }
    else
    {
        cout << "O valor de booleano é avaliado como false." << endl;
    }

    return 0;
}
