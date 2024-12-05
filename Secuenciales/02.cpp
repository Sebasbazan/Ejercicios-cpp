#include<iostream>
using namespace std;
int main(){
    float metros, centimetros, pulgadas, pies, yardas;

    cout << "Ingrese la cantidad en metros: ";
    cin >> metros;

    centimetros = metros * 100;
    pulgadas = (metros*100)/2.54;
    pies = (metros*100)/(2.54*12);
    yardas = (metros*100)/(2.54*12*3);

    cout<<"Centimetros: "<< centimetros << endl;
    cout<<"Pulgadas: "<< pulgadas << endl;
    cout<<"Pies: "<< pies << endl;
    cout<<"Yardas: "<< yardas << endl;

    return 0;
}