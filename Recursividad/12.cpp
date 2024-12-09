#include<iostream>
using namespace std;
void imprimirNumeros(int numero, int contador){
    cout << numero << ((contador % 10 == 0)?"\n":" ");
    (numero < 100)? imprimirNumeros(numero + 1, contador + 1): void();

}

int main(){
    imprimirNumeros(1,1);
    return 0;
}