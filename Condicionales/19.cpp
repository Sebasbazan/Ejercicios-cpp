#include <iostream>
#include <string> 
using namespace std;

int main() {

    char sexo;
    int edad;
    string categoria;

    cout << "Ingrese el sexo del postulante (F/M): ";
    cin >> sexo;
    cout << "Ingrese la edad del postulante: ";
    cin >> edad;

    categoria = (sexo == 'F' || sexo == 'f') 
                ? (edad < 23 ? "FA" : "FB") 
                : (edad < 25 ? "MA" : "MB");

    cout << "\nLa categoria del postulante es: " << categoria << endl;

    return 0;
}
