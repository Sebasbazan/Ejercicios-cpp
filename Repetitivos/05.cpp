#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Ingrese el numero para generar su tabla de multiplicar: ";
    cin >> n;

    cout << "Tabla de multiplicar de " << n << ":" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
