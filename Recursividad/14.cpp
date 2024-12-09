#include<iostream>
using namespace std;
int contarDivisores(int n, int divisor){
    return(divisor ==0)
    ? 0
    : ((n % divisor == 0)? 1 : 0)+contarDivisores(n,divisor -1); 
}

bool esPrimo(int n){
    return(n <= 1)
    ? false 
    : (contarDivisores(n,n)== 2);
}

int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << (esPrimo(numero) ? "El numero es primo" : "El numero no es primo") << endl;

    return 0;
}