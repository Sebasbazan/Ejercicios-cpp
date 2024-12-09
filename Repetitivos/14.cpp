#include<iostream>
using namespace std;
int main(){
    int n;
    bool esPrimo = true;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    if(n <= 1){
        cout << "El numero no es primo."<< endl;
        return 0;
    }

    for (int i = 2; i <= n / 2; i++){
        if(n%i == 0){
            esPrimo = false;
            break;
        }
    }

    if (esPrimo){
        cout << "El numero " << n << "es primo." << endl;
    }else{
        cout << "El numero " << n << " no es primo." << endl;
    }

    return 0;

}