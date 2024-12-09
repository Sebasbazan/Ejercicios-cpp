#include<iostream>
using namespace std;
int main(){
   float base, altura, area, perimetro;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;                
    perimetro = 2 * (base + altura);     

    cout << "El area del rectangulo es: " << area << " unidades cuadradas" << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << " unidades" << endl;

    return 0; 
}