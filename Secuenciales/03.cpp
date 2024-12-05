#include<iostream>
using namespace std;
int main(){
    float tramoKm, tramoPies, tramoMillas;
    float totalMetros, totalYardas;

    cout << "Ingrese la longitud del primer tramo en kilometros: ";
    cin >> tramoKm;
    cout << "Ingrese la longitud del segundo tramo en pies: ";
    cin >> tramoPies;
    cout << "Ingrese la longitud del tercer tramo en millas: ";
    cin >> tramoMillas;

    totalMetros = (tramoKm*1000)+(tramoPies/1.2808)+(tramoMillas*1609);

    totalYardas = totalMetros * 1.09361;

    cout<<"La longitud total recorrida es: "<<endl;
    cout<< totalMetros << " mentros"<< endl;
    cout<< totalYardas << " yardas"<< endl;

    return 0;

}