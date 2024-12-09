#include<iostream>
using namespace std;
int sumaMultiplos(int n){
    return(n <= 0)
    ? 0
    :((n % 3 == 0 && n % 5 !=0)? n:0)+sumaMultiplos(n-1); 
}

int main(){
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "La suma es: "<< sumaMultiplos(n)<< endl;

    return 0;
}