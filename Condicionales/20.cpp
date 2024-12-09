#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    string resultado;

    cout << "Ingrese el primer numero (a): ";
    cin >> a;
    cout << "Ingrese el segundo numero (b): ";
    cin >> b;
    cout << "Ingrese el tercer numero (c): ";
    cin >> c;

    if (a < b && b < c) {
        resultado = "ascendente";
    } else if (a > b && b > c) {
        resultado = "descendente";
    } else {
        resultado = "desorden";
    }

    cout << "\nLos numeros están en orden: " << resultado << endl;

    return 0;
}
