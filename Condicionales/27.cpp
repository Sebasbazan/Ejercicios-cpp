#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double montoVendido, sueldoBasico = 600, comision, sueldoBruto, descuento, sueldoNeto;
    int polos;

    cout << "Ingrese el monto total vendido: S/. ";
    cin >> montoVendido;

    comision = montoVendido * 0.15;

    sueldoBruto = sueldoBasico + comision;

    if (sueldoBruto > 1800) {
        descuento = sueldoBruto * 0.10; 
    } else {
        descuento = sueldoBruto * 0.05; 
    }

    sueldoNeto = sueldoBruto - descuento;
    if (montoVendido > 1000) {
        polos = 3;
    } else {
        polos = 1;
    }

    cout << fixed << setprecision(2); 
    cout << "\nResultados:" << endl;
    cout << "Sueldo bruto: S/. " << sueldoBruto << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Sueldo neto: S/. " << sueldoNeto << endl;
    cout << "Numero de polos obsequiados: " << polos << endl;

    return 0;
}
