#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    int cifra1_num1, cifra2_num1, cifra3_num1;
    int cifra1_num2, cifra2_num2,cifra3_num2;
    int numero_num1, nuevo_num2;

    cout << "Ingrese el primer numero de 3 cifras: ";
    cin >> num1;
    cout << "Ingrese el segundo numero de 3 cifras: ";
    cin >> num2;

    if(num1 >= 100 && num1 <= 999 && num2 >= 100 && num2 <= 999){
        cifra1_num1 = num1 / 100;
        cifra2_num1 = (num1 / 10) % 10;
        cifra3_num1 = num1 % 10;

        cifra1_num2 = num2 / 100;
        cifra2_num2 = (num2 / 10) % 10;
        cifra3_num2 = num2 % 10;

        numero_num1 = cifra3_num2 * 100 + cifra2_num1 * 10 + cifra1_num1;
        nuevo_num2 = cifra3_num1 * 100 + cifra2_num2 * 10 + cifra1_num2;

        cout << "El primer número con las cifras intercambiadas es: " << numero_num1 << endl;
        cout << "El segundo número con las cifras intercambiadas es: " << nuevo_num2 << endl;

    }else{
        cout << "Ambos numeros deben ser de 3 cifras." << endl;
    }

    return 0;

}