#include <iostream>

using namespace std;

int main() {
    
    int n, x, y;

    cout << "Ingrese el numero para generar su tabla de multiplicar: ";
    cin >> n;
    cout << "Ingrese el inicio de la tabla (x): ";
    cin >> x;
    cout << "Ingrese el final de la tabla (y): ";
    cin >> y;

    if (x > y) {
        cout << "Error: El inicio de la tabla (x) debe ser menor o igual al final (y)." << endl;
    } else {

        cout << "Tabla de multiplicar de " << n << " desde " << x << " hasta " << y << ":" << endl;
        for (int i = x; i <= y; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }

    return 0;
}
