#include <iostream>  
using namespace std;  

int main() {  
 
    const int PRODUCTO_101 = 17;  
    const int PRODUCTO_102 = 25;  
    const int PRODUCTO_103 = 16;  
    const int PRODUCTO_104 = 27;  
 
    int codigo, unidades;  
  
    cout << "Ingrese el codigo del producto (101, 102, 103, 104): ";  
    cin >> codigo;  
    cout << "Ingrese la cantidad de unidades: ";  
    cin >> unidades;  
 
    int precioUnitario;  
    float descuento = 0.0;  
  
    precioUnitario = (codigo == 101) ? PRODUCTO_101 :  
                     (codigo == 102) ? PRODUCTO_102 :  
                     (codigo == 103) ? PRODUCTO_103 :  
                     (codigo == 104) ? PRODUCTO_104 : 0;  
  
    descuento = (unidades >= 1 && unidades <= 10) ? 0.05 :  
                (unidades >= 11 && unidades <= 20) ? 0.08 :  
                (unidades >= 21 && unidades <= 30) ? 0.10 :  
                (unidades >= 31) ? 0.13 : 0.0;  
  
    float importeTotal = precioUnitario * unidades;  
    float descuentoAplicado = importeTotal * descuento;  
    float totalAPagar = importeTotal - descuentoAplicado;  

    // Mostrar resultados  
    cout << "Importe Total: S/. " << importeTotal << endl;  
    cout << "Descuento: S/. " << descuentoAplicado << endl;  
    cout << "Total a Pagar: S/. " << totalAPagar << endl;  

    return 0;  
}