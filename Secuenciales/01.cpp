#include<iostream>
using namespace std;
int main(){
    int numVarones, numMujeres, totalEstudiantes;
    float porcentajeVarones, porcentajeMujeres;

    cout<<"Ingresa el numero de varones: ";
    cin>> numVarones;
    cout<<"Ingresa el numero de mujeres: ";
    cin>> numMujeres;

    totalEstudiantes = numVarones + numMujeres;
    porcentajeVarones = (static_cast<float>(numVarones)/totalEstudiantes)*100;
    porcentajeMujeres = (static_cast<float>(numMujeres)/totalEstudiantes)*100;

    cout<<"Porcentaje de varones: "<< porcentajeVarones << "%" << endl;
    cout<<"Porcentaje de mujeres: "<< porcentajeMujeres << "%" << endl;

    return 0;
}