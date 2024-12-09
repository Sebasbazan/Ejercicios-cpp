#include <iostream>

using namespace std;

int main() {
    
    double base;
    int exponente;
    double resultado = 1; 

    cout << "Ingrese la base (numero): ";
    cin >> base;
    cout << "Ingrese el exponente (entero): ";
    cin >> exponente;

    if (exponente >= 0) {
        for (int i = 1; i <= exponente; i++) {
            resultado *= base; 
        }
    } else {
        
        for (int i = 1; i <= -exponente; i++) {
            resultado *= base;
        }
        resultado = 1 / resultado; 
    }

    
    cout << "El resultado de " << base << "^" << exponente << " es: " << resultado << endl;

    return 0;
}
