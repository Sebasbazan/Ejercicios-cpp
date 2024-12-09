#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    // Variables
    float cuota, montoPagar;
    int diaPago;

    cout << "Ingrese la cuota mensual: S/. ";
    cin >> cuota;
    cout << "Ingrese el dia en que realizo el pago: ";
    cin >> diaPago;

    if (diaPago <= 10) {
        
        float descuento = max(5.0, cuota * 0.02);
        montoPagar = cuota - descuento;
    } 
    else if (diaPago <= 20) {

        montoPagar = cuota;
    } 
    else {
   
        float recargo = max(10.0, cuota * 0.03);
        montoPagar = cuota + recargo;
    }

    cout << "El monto a pagar es: S/. " << montoPagar << endl;

    return 0;
}
