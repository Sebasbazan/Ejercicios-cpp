#include<iostream>
using namespace std;
int main(){
    int contador = 0;
    for(int numero = 100; numero <= 999; numero++){
        int centena = numero / 100;
        int unidad = numero % 10;

        if (centena == unidad){
            contador++;
        }
    }

    cout << "Cantidad de numeros capicuas de 3 cifras: " << contador << endl;

    return 0;
}