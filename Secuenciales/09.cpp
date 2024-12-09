#include<iostream>
using namespace std;
int main(){
    int numero, cifra1, cifra2, cifra3, cifra4, suma;

    cout<<"Ingrese un numero entero de 4 cifras: ";
    cin >> numero;

    if(numero>= 1000 && numero <= 9999){
        cifra1 = numero / 1000;
        cifra2 = (numero / 100) % 10;
        cifra3 = (numero / 10)%10;
        cifra4 = numero % 10;

        suma = cifra1 + cifra2 + cifra3 + cifra4;

        cout<<"La suma de las cifras es: "<< suma << endl;

    }else{
        cout<<"El numero ingresado no es de 4 cifras."<< endl;
    }

    return 0;
}