#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double montoCompra, montoPrestamo, montoPropio, totalPago;
    double interes;

    cout << "Ingrese el monto total de la compra: S/. ";
    cin >> montoCompra;

    if (montoCompra <= 0) {
        cout << "Error: El monto de la compra no puede ser negativo o cero." << endl;
        return 1; 
    }

    if (montoCompra > 5000) {
        montoPrestamo = montoCompra * 0.30; 
    } else {
        montoPrestamo = montoCompra * 0.20; 
    }

    montoPropio = montoCompra - montoPrestamo;

    interes = montoPrestamo * 0.10; 

    totalPago = montoPrestamo + interes;

    cout << fixed << setprecision(2); 
    cout << "\nResultados:" << endl;
    cout << "Monto a pagar con préstamo (incluyendo interés): S/. " << totalPago << endl;
    cout << "Monto a cubrir con dinero propio: S/. " << montoPropio << endl;
    cout << "Interés sobre el préstamo: S/. " << interes << endl;

    return 0;  
}