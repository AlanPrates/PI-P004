#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    // Declarando a variável "pi_float" do tipo float
    float pi_float = 3.14159265358979323846;

    cout << "Valor mínimo para float: " << numeric_limits<float>::min() << endl;
    cout << "Valor máximo para float: " << numeric_limits<float>::max() << endl;
    cout << "Valor de pi (float): " << pi_float << endl;
    cout << "Valor de pi com 2 casas decimais: " << setprecision(2) << pi_float << endl;
    cout << "Valor de pi com 4 casas decimais: " << setprecision(4) << pi_float << endl;
    cout << "Valor de pi com 8 casas decimais: " << setprecision(8) << pi_float << endl;
    cout << "Valor de pi com 16 casas decimais: " << setprecision(16) << pi_float << endl;
    cout << endl;

    cout << "################### Trabalhando com double. ################" << endl;
    double pi_double = 3.14159265358979323846;

    cout << "Valor de pi (double): " << pi_double << endl;
    cout << "Valor de pi com 2 casas decimais: " << setprecision(2) << pi_double << endl;
    cout << "Valor de pi com 4 casas decimais: " << setprecision(4) << pi_double << endl;
    cout << "Valor de pi com 8 casas decimais: " << setprecision(8) << pi_double << endl;
    cout << "Valor de pi com 16 casas decimais: " << setprecision(16) << pi_double << endl;
    cout << endl;

    cout << "#################### Trabalhando com long double ##################" << endl;
    long double pi_long_double = 3.14159265358979323846;

    cout << "Valor de pi (long double): " << pi_long_double << endl;
    cout << "Valor de pi com 2 casas decimais: " << setprecision(2) << pi_long_double << endl;
    cout << "Valor de pi com 4 casas decimais: " << setprecision(4) << pi_long_double << endl;
    cout << "Valor de pi com 8 casas decimais: " << setprecision(8) << pi_long_double << endl;
    cout << "Valor de pi com 16 casas decimais: " << setprecision(16) << pi_long_double << endl;
    cout << endl;

    return 0;
}
