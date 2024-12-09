#include <iostream>  
using namespace std;  

int main() {  
    float montoVendido, sueldoBase = 250.0, sueldoBruto, comision, descuento, sueldoNeto;  

    // Solicitar el monto total vendido  
    cout << "Ingrese el monto total vendido: S/. ";  
    cin >> montoVendido;  

    if (montoVendido <= 5000) {  
        comision = montoVendido * 0.05;  
    } else if (montoVendido <= 10000) {  
        comision = montoVendido * 0.08;
    } else if (montoVendido <= 20000) {  
        comision = montoVendido * 0.10;
    } else {  
        comision = montoVendido * 0.15; 
    }  
  
    sueldoBruto = sueldoBase + comision;  
 
    if (sueldoBruto > 3500) {  
        descuento = sueldoBruto * 0.15;  
    } else {  
        descuento = sueldoBruto * 0.08; 
    }  
  
    sueldoNeto = sueldoBruto - descuento;  
  
    cout << "Sueldo bruto: S/. " << sueldoBruto << endl;  
    cout << "Comision aplicada: S/. " << comision << endl;  
    cout << "Descuento aplicado: S/. " << descuento << endl;  
    cout << "Sueldo neto a pagar: S/. " << sueldoNeto << endl;  

    return 0;  
}