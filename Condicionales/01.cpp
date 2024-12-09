#include<iostream>
using namespace std; 
int main(){
    int cantidad;
    double precio_unitario, importe_compra, descuento, total_pagar;
    cout << "Ingrese la cantidad de unidades a comprar: ";
    cin >> cantidad;

    if (cantidad >= 1 && cantidad <= 25){
        precio_unitario = 27.0;
    }else if(cantidad >= 26 && cantidad <= 50){
        precio_unitario = 25.0;
    }else if (cantidad >= 51){
        precio_unitario = 23.0;
    }else{
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    importe_compra = cantidad * precio_unitario;

    if(cantidad > 50){
        descuento = importe_compra * 0.15;
    }else{
        descuento = importe_compra * 0.05;
    }

    total_pagar = importe_compra - descuento;

    cout << "Precio unitario: S/." << precio_unitario << endl;
    cout << "Cantidad de unidades: " << cantidad << endl;
    cout << "Importe de compra: S/." << importe_compra << endl;
    cout << "Descuento: S/." << precio_unitario << endl;
    cout << "Total a pagar: S/." << total_pagar << endl;

    return 0;
}