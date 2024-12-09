#include <iostream>

using namespace std;

int main() {
    
    int dividendo, divisor, cociente = 0, resto;

    cout << "Ingrese el dividendo: ";
    cin >> dividendo;

    cout << "Ingrese el divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "El divisor no puede ser cero." << endl;
        return 1;  
    }

    resto = dividendo;  

    while (resto >= divisor) {
        resto -= divisor;  
        cociente++;
    }

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
