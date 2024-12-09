#include <iostream>

using namespace std;

int main() {
   
    int numero, contadorDivisores = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1; 
    }

    for (int i = 1; i <= numero; i++) {
       
        if (numero % i == 0) {
            contadorDivisores++;  
        }
    }

    cout << "La cantidad de divisores de " << numero << " es: " << contadorDivisores << endl;

    return 0;
}
