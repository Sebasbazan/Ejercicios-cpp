#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    const double PRECIO_A = 25.0;
    const double PRECIO_B = 30.0;
    const double DESCUENTO_A = 0.15; 
    const double DESCUENTO_B = 0.10;

    int cantidadA, cantidadB;

    double importeBrutoA, importeBrutoB, descuentoA, descuentoB, totalA, totalB;
    double importeBrutoTotal, descuentoTotal, totalPagar;

    cout << "Ingrese la cantidad de unidades del producto A: ";
    cin >> cantidadA;
    cout << "Ingrese la cantidad de unidades del producto B: ";
    cin >> cantidadB;

    importeBrutoA = cantidadA * PRECIO_A;
    importeBrutoB = cantidadB * PRECIO_B;

    descuentoA = (cantidadA > 50) ? importeBrutoA * DESCUENTO_A : 0.0;
    descuentoB = (cantidadB > 60) ? importeBrutoB * DESCUENTO_B : 0.0;

    totalA = importeBrutoA - descuentoA;
    totalB = importeBrutoB - descuentoB;

    importeBrutoTotal = importeBrutoA + importeBrutoB;
    descuentoTotal = descuentoA + descuentoB;
    totalPagar = totalA + totalB;

    cout << fixed << setprecision(2); 
    cout << "\nResultados:" << endl;
    cout << "Importe bruto total: S/. " << importeBrutoTotal << endl;
    cout << "Descuento total: S/. " << descuentoTotal << endl;
    cout << "Total a pagar: S/. " << totalPagar << endl;

    return 0;
}
