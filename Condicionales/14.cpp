#include <iostream>  
using namespace std;  

int main() {  
    int numeroTarjeta;  
    float montoCompra;  

    cout << "Ingrese el numero de la tarjeta: ";  
    cin >> numeroTarjeta;  
    cout << "Ingrese el monto de la compra: S/. ";  
    cin >> montoCompra;  
 
    float porcentajeDescuento = (numeroTarjeta >= 100 && numeroTarjeta % 2 == 0) ? 0.15 : 0.05;  
 
    float descuento = montoCompra * porcentajeDescuento;  
 
    cout << "Numero de la tarjeta: " << numeroTarjeta << endl;  
    cout << "Monto de la compra: S/. " << montoCompra << endl;  
    cout << "Descuento aplicado: S/. " << descuento << endl;  

    return 0;  
}