#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x;

    cout << "Digite os coeficientes a, b e c do polinômio de segundo grau (ax^2 + bx + c): ";
    cin >> a >> b >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0)
    {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "O polinômio tem duas raízes reais: " << raiz1 << " e " << raiz2 << endl;
    }
    else if (discriminante == 0)
    {
        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real: " << raiz << endl;
    }
    else
    {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    cout << "Digite um valor para x: ";
    cin >> x;

    double resultado = a * pow(x, 2) + b * x + c;
    cout << "O valor de p(x) é: " << resultado << endl;

    return 0;
}
