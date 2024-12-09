#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double precioDocena, montoCompra, descuento, totalPagar;
    int docenasCompradas, lapiceros;

    cout << "Ingrese el precio por docena del producto(S/.): ";
    cin >> precioDocena;
    cout << "Ingrese la cantidad de docenas compradas: ";
    cin >> docenasCompradas;

    montoCompra = precioDocena * docenasCompradas;
    descuento = montoCompra * ( docenasCompradas >= 6 ? 0.15 : 0.10);
    totalPagar = montoCompra - descuento;
    lapiceros = (docenasCompradas >= 30 ? (docenasCompradas / 3)*2:0);

    cout << fixed << setprecision(2);
    cout << "\nResultados: "<< endl;
    cout << "Monto de la compra: S/. " << montoCompra << endl;
    cout << "Descuento: S/. "<< descuento << endl;
    cout << "Total a pagar: S/. "<< totalPagar << endl;
    cout << "Cantidad de lapiceros de obsequio: "<< lapiceros << endl;

    return 0;
}