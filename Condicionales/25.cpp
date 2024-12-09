#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    
    double sueldoBruto, bonificacion;
    int cantidadHijos;
    double sueldoNeto;

    cout << "Ingrese el sueldo bruto del empleado: S/. ";
    cin >> sueldoBruto;
    cout << "Ingrese la cantidad de hijos del empleado: ";
    cin >> cantidadHijos;

    if (sueldoBruto <= 0 || cantidadHijos < 0) {
        cout << "Error: Los valores ingresados no son validos." << endl;
        return 1; 
    }

    if (cantidadHijos > 1) {
        bonificacion = sueldoBruto * 0.125 + (cantidadHijos * 40);
    } else {
        bonificacion = sueldoBruto * 0.10;
    }

    sueldoNeto = sueldoBruto + bonificacion;

    cout << fixed << setprecision(2); 
    cout << "\nResultados:" << endl;
    cout << "Bonificación: S/. " << bonificacion << endl;
    cout << "Sueldo neto a pagar: S/. " << sueldoNeto << endl;

    return 0;
}
