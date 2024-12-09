#include <iostream>
using namespace std;

int main() {
   
    int numero, estadoCivil, edad, sexo;
    string estadoCivilStr, sexoStr;

    cout << "Ingrese el numero de empleado (4 cifras): ";
    cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "Error: El numero debe tener exactamente 4 cifras." << endl;
        return 1;
    }

    estadoCivil = numero / 1000;     
    edad = (numero / 10) % 100;       
    sexo = numero % 10;              

    switch (estadoCivil) {
        case 1: estadoCivilStr = "Soltero"; break;
        case 2: estadoCivilStr = "Casado"; break;
        case 3: estadoCivilStr = "Divorciado"; break;
        case 4: estadoCivilStr = "Viudo"; break;
        default: estadoCivilStr = "Desconocido"; break;
    }

    sexoStr = (sexo == 1) ? "Masculino" : (sexo == 2 ? "Femenino" : "Desconocido");

    cout << "\nResultados:" << endl;
    cout << "Estado civil: " << estadoCivilStr << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Sexo: " << sexoStr << endl;

    return 0;
}
