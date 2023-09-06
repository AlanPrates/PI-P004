#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    c = a + b;
    cout << "A soma em formato hexadecimal: " << hex << c << endl;

    c = a * b;
    cout << "O produto em formato octal: " << oct << c << endl;

    c = abs(a - b);
    cout << "O valor absoluto da diferença: " << c << endl;

    if (b != 0)
    {
        c = a / b;
        cout << "O quociente da divisão: " << c << endl;

        if (a % b == 0)
        {
            cout << "a é divisível por b." << endl;
        }
        else
        {
            cout << "a não é divisível por b." << endl;
        }
    }
    else
    {
        cout << "A divisão por zero não é possível." << endl;
    }

    return 0;
}
