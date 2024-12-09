#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double ingresoMensual, costoCasa, cuotaInicial, montoMensual;
    int cuotas;

    cout << "Ingrese el ingreso mensual del comprador (S/.): ";
    cin >> ingresoMensual;
    cout << "Ingrese el costo de la casa (S/.): ";
    cin >> costoCasa;

    cuotaInicial = costoCasa * (ingresoMensual < 1250 ? 0.15 : 0.30);
    cuotas = ingresoMensual < 1250 ? 120 : 75;
    montoMensual = (costoCasa - cuotaInicial) / cuotas;

    cout << fixed << setprecision(2);
    cout << "\nResultados: " << endl;
    cout << "Cuota inicial: S/. " << cuotaInicial << endl;
    cout << "Monto mensual: S/. " << montoMensual << endl;

    return 0;
}