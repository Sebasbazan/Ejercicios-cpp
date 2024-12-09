#include <iostream>
using namespace std;

int main() {
    int hora, minuto;
    
    // Entrada de datos
    cout << "Ingrese la hora (formato 24 horas):\n";
    cout << "Hora (0-23): ";
    cin >> hora;
    cout << "Minuto (0-59): ";
    cin >> minuto;

    if (hora < 0 || hora > 23 || minuto < 0 || minuto > 59) {
        cout << "Error: La hora o minuto ingresado es invalido." << endl;
    } else {
        string periodo = "AM";
        int hora12 = hora;

        if (hora >= 12) {
            periodo = "PM";
            if (hora > 12) {
                hora12 = hora - 12; 
            }
        }
        if (hora == 0) {
            hora12 = 12; 
        }
        if (hora == 12) {
            hora12 = 12;  
        }

        cout << "Hora en formato de 12 horas: " << hora12 << ":";
        if (minuto < 10) {
            cout << "0";
        }
        cout << minuto << " " << periodo << endl;
    }

    return 0;
}
