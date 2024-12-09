#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la altura del rectangulo (n >= 4): ";
    cin >> n;

    if (n < 4) {
        cout << "Error: La altura debe ser mayor o igual a 4." << endl;
    } else {
        
        int ancho = 2 * n; 

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= ancho; j++) {
                cout << "*"; 
            }
            cout << endl; 
        }
    }

    return 0;
}
