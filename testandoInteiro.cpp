#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int min_int = numeric_limits<int>::min();
    int max_int = numeric_limits<int>::max();

    cout << "Menor valor de int: " << min_int << endl;
    cout << "Maior valor de int: " << max_int << endl;

    unsigned long int max_uli = numeric_limits<unsigned long int>::max();
    unsigned long int min_uli = numeric_limits<unsigned long int>::min();
    cout << "Menor valor de unsigned long int: " << min_uli << endl;
    cout << "Maior valor de unsigned long int: " << max_uli << endl;

    long int li = max_uli;
    unsigned long int uli = li;

    cout << "li após a atribuição: " << li << endl;
    cout << "uli após a atribuição: " << uli << endl;

    li = numeric_limits<long int>::max();
    long int min_li = numeric_limits<long int>::min();
    cout << "Menor valor de long int: " << min_li << endl;
    cout << "Maior valor de long int: " << li << endl;

    unsigned int ui = li;
    li = ui;

    cout << "ui após a atribuição: " << ui << endl;
    cout << "li após a atribuição: " << li << endl;

    ui = numeric_limits<unsigned int>::max();
    unsigned int min_ui = numeric_limits<unsigned int>::min();
    cout << "Menor valor de unsigned int: " << min_ui << endl;
    cout << "Maior valor de unsigned int: " << ui << endl;

    return 0;
}
