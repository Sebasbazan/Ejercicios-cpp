#include<iostream>
using namespace std;
int main(){
    float numero;
    cout << "Ingrese el numero: ";
    cin >> numero;
    string resultado = (numero > 0) ? "Positivo" :
                         (numero < 0) ? "Negativo" :
                            "Cero";
    
    cout << "El numero es: " << resultado << endl;

    return 0 ; 
}