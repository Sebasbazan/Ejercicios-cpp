#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double montoVendido, sueldoBase, bonoExceso, sueldoTotal;

    cout << "Ingrese el monto total vendido: S/. ";
    cin >> montoVendido;

    if(montoVendido < 0){
        cout << "Error: El monto vendido no puede ser negativo."<<endl;
        return 1;
    }

    sueldoBase = montoVendido * 0.10;

    bonoExceso = (montoVendido > 5000) ? ((static_cast<int>((montoVendido - 5000) / 500)) * 25) : 0.0;

    sueldoTotal = sueldoBase + bonoExceso;

    cout << fixed << setprecision(2); 
    cout << "\nResultados:" << endl;
    cout << "Sueldo base (10% del monto vendido): S/. " << sueldoBase << endl;
    cout << "Bono por ventas en exceso: S/. " << bonoExceso << endl;
    cout << "Sueldo total: S/. " << sueldoTotal << endl;

    return 0;
}