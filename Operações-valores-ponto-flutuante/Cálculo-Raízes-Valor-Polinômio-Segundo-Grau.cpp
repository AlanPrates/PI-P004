#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x, y, z;

    cout << "Digite dois números de ponto flutuante (x e y): ";
    cin >> x >> y;

    double fy = 5 * x + 2;

    if (y < fy)
    {
        cout << "O ponto (" << x << ", " << y << ") está à esquerda da curva." << endl;
    }
    else if (y > fy)
    {
        cout << "O ponto (" << x << ", " << y << ") está à direita da curva." << endl;
    }
    else
    {
        cout << "O ponto (" << x << ", " << y << ") está na curva." << endl;
    }

    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;

    z = x * y;
    cout << "O produto de x e y em notação científica: " << scientific << z << endl;

    return 0;
}
