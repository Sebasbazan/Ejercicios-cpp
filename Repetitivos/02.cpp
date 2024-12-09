#include<iostream>
using namespace std;
int main(){
    int a, b, resultado = 0;

    cout << "Ingrese el primer numero (a): ";
    cin >> a;
    cout << "Ingrese el segundo numero (b): ";
    cin >> b;

    for(int i = 0; i< abs(b);i++){
        resultado += a;
    }
    cout<< "El resultado de "<< a <<"*"<< b <<" es"<< resultado << endl;

    return 0;
}