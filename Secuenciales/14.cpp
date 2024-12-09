#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    double num[5];

    cout << "Ingrese 5 numeros" << endl;
    for(int i = 0; i<5; ++i){
        cin >> num[i];
    }
    sort(num, num + 5);
    double promedio = (num[2] + num[3] + num[4]) / 3.0;

    cout << "El promedio de los tres nueros mayores es: "<< promedio << endl;

    return 0;
}