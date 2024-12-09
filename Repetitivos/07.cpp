#include <iostream>

using namespace std;

int main() {
    
    int numero;
    long long factorial = 1; 

    
    cout << "Ingrese un numero entero no negativo: ";
    cin >> numero;

    
    if (numero < 0) {
        cout << "Error: El factorial no esta definido para numeros negativos." << endl;
    } else {
        
        for (int i = 1; i <= numero; i++) {
            factorial *= i; 
        }

        
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
