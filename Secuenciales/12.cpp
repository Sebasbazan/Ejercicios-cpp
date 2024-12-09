#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    
    double a, b, c;
    double discriminante, raiz1, raiz2;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    if (a == 0) {
        cout << "El coeficiente 'a' no puede ser cero. No es una ecuacion cuadratica." << endl;
        return 1;
    }

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son reales y diferentes." << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } 
    else if (discriminante == 0) {
    
        raiz1 = -b / (2 * a);
        cout << "La solucion es real y doble." << endl;
        cout << "Raiz: " << raiz1 << endl;
    } 
    else {
    
        double parte_imaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son complejas." << endl;
        cout << "Raiz 1: " << -b / (2 * a) << " + " << parte_imaginaria << "i" << endl;
        cout << "Raiz 2: " << -b / (2 * a) << " - " << parte_imaginaria << "i" << endl;
    }

    return 0;
}
