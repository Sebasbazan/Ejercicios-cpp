#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float radio, altura, area, volumen;

    cout<<"Ingrese el radio del cilindro: ";
    cin >> radio;
    cout<< "Ingrese la altura del cilindro: ";
    cin>>altura;

    area = 2* M_PI * radio * (radio + altura);
    volumen = M_PI * pow(radio,2)*altura;

    cout << "El area total del cilindro es: "<< area << " unidades cuadradas"<< endl;
    cout << "El volumen del cilindro es: "<< volumen << " unidades cubicas"<< endl;

    return 0;
}