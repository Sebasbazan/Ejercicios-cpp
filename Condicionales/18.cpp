#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double donacion, centroSalud, comedorNiños, bolsa;

    cout << "Ingrese el monto de a donacion ($): ";
    cin >> donacion;

    centroSalud = donacion * (donacion >= 10000 ? 0.30 : 0.25);
    comedorNiños = donacion * (donacion >= 10000 ? 0.50 : 0.60);

    cout << fixed << setprecision(2);
    cout << "\nResultado del reparto de la donacion: " << endl;
    cout << "Centro de salud: $" << centroSalud << endl;
    cout << "Comedor de ninos: $" << comedorNiños << endl;
    cout << "Inversion en la bolsa: $" << bolsa << endl;

    return 0;
}