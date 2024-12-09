#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    double juan, rosa, daniel, totalDolares;
    const double tasaCambio = 3.00; 

    cout << "Ingrese el aporte de Juan en dolares: ";
    cin >> juan;
    
    cout << "Ingrese el aporte de Rosa en dolares: ";
    cin >> rosa;
    
    cout << "Ingrese el aporte de Daniel en soles: ";
    cin >> daniel;

    double danielDolares = daniel / tasaCambio;

    totalDolares = juan + rosa + danielDolares;

    double porcentajeJuan = (juan / totalDolares) * 100;
    double porcentajeRosa = (rosa / totalDolares) * 100;
    double porcentajeDaniel = (danielDolares / totalDolares) * 100;

    cout << fixed << setprecision(2); 
    cout << "El capital total en dolares es: " << totalDolares << endl;
    cout << "El porcentaje de aporte de Juan es: " << porcentajeJuan << "%" << endl;
    cout << "El porcentaje de aporte de Rosa es: " << porcentajeRosa << "%" << endl;
    cout << "El porcentaje de aporte de Daniel es: " << porcentajeDaniel << "%" << endl;

    return 0;
}
