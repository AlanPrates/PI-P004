/*
Atribua a li o maior valor que pode ser armazenado num long
int (identifique qual o menor e o maior valor que pode ser
representado);
*/

#include <iostream>
#include <climits> // ou <limits.h> no C++

using namespace std;

int main() {
    
    long int li;

    // Atribui o maior valor representável por um long int a li
    li = LONG_MAX;

    cout << "Menor valor representável por um long int: " << LONG_MIN << endl;
    cout << "Maior valor representável por um long int: " << li << endl;

    return 0;
}
