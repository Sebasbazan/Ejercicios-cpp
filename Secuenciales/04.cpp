#include<iostream>
using namespace std;
int main(){
    int pies;
    float pulgadas, estaturaMetros;

    cout << "Ingrese la cantidad de pies: ";
    cin >> pies;
    cout<<"Ingrese la cantidad de pulgadas: ";
    cin>>pulgadas;

    estaturaMetros = (pies*12+pulgadas)*0.0254;

    cout<<"La estatura en metro es: "<< estaturaMetros << " m"<< endl;

    return 0;
}