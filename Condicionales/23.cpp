#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

    double notaMatematicas, notaFisica;
    double propinaMatematicas, propinaFisica, promedio;

    cout << "Ingrese la nota de Matematicas: ";
    cin >> notaMatematicas;
    cout << "Ingrese la nota de Fisica: ";
    cin >> notaFisica;

    if (notaMatematicas < 0 || notaMatematicas > 20 || notaFisica < 0 || notaFisica > 20) {
        cout << "Error: Las notas deben estar en el rango de 0 a 20." << endl;
        return 1; 
    }

    propinaMatematicas = (notaMatematicas > 17) ? 3.0 : notaMatematicas * 1.0;

    propinaFisica = (notaFisica > 15) ? 2.0 : notaFisica * 0.50;

    promedio = (notaMatematicas + notaFisica) / 2;

    cout << fixed << setprecision(2); 
    cout << "\nResultados:" << endl;
    cout << "Propina por Matematicas: S/. " << propinaMatematicas << endl;
    cout << "Propina por Fisica: S/. " << propinaFisica << endl;
    cout << "Propina total: S/. " << (propinaMatematicas + propinaFisica) << endl;

    if (promedio > 16) {
        cout << "¡Felicidades! El hijo recibe un reloj como obsequio." << endl;
    } else {
        cout << "El hijo no recibe un reloj." << endl;
    }

    return 0;
}
