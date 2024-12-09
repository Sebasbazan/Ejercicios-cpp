#include<iostream>
using namespace std;
int main(){
    float horasTrabajadas, tarifaPorHora, sueldoBruto, descuento, sueldoNeto;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora: S/. ";
    cin >> tarifaPorHora;

    if (horasTrabajadas <= 48){
        sueldoBruto = horasTrabajadas * tarifaPorHora;
    }else{
        float horasExtras = horasTrabajadas - 48;
        sueldoBruto = (48 * tarifaPorHora) + (horasExtras * tarifaPorHora * 1.2);
    }

    if (sueldoBruto > 1500){
        descuento = sueldoBruto * 0.11;
    }else{
        sueldoNeto = 0;
    }

    sueldoNeto = sueldoBruto - descuento;

    cout << "\nDetalles del sueldo:" << endl;
    cout << "Horas trabajadas: " << horasTrabajadas << " horas" << endl;
    cout << "Pago por hora: S/. " << tarifaPorHora << endl;
    cout << "Sueldo bruto: S/. " << sueldoBruto << endl;
    cout << "Descuento aplicado: S/. " << descuento << endl;
    cout << "Sueldo neto a pagar: S/. " << sueldoNeto << endl;

    return 0;
}