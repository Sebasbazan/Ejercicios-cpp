#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un numero entero positivo (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "El numero debe ser positivo." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            suma += i;
        }
    }

    cout << "La suma de los numeros multiplos de 3 pero no de 5 menores o iguales a " << n << " es: " << suma << endl;

    return 0;
}
