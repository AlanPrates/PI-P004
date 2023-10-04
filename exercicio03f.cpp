/*
Atribua a ui o maior valor que pode ser armazenado num
unsigned int (identifique qual o menor e o maior valor que pode
ser representado);
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    unsigned int ui;

    // Atribui o maior valor representável por um unsigned int a ui
    ui = UINT_MAX;

    cout << "Menor valor representável por um unsigned int: " << 0 << endl;
    cout << "Maior valor representável por um unsigned int: " << ui << endl;

    return 0;
}
