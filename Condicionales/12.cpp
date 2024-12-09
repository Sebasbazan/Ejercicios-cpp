#include <iostream>  
using namespace std;  

int main() {  
    int dia;  

    cout << "Ingrese un numero del 1 al 7 para determinar el dia de la semana: ";  
    cin >> dia;  
  
    string nombreDia = (dia == 1) ? "Lunes" :  
                        (dia == 2) ? "Martes" :  
                        (dia == 3) ? "Miercoles" :  
                        (dia == 4) ? "Jueves" :  
                        (dia == 5) ? "Viernes" :  
                        (dia == 6) ? "Sebado" :  
                        (dia == 7) ? "Domingo" : "Numero invalido";  
 
    cout << "El dia correspondiente es: " << nombreDia << endl;  

    return 0;  
}