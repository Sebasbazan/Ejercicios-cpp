#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Ingrese el numero (n): ";
    cin >> n;
    cout << "Ingrese la cantidad de multiplos (m): ";
    cin >> m;

    cout << "Los primeros " << m << " multiplos de " << n << " son:" << endl;
    
    for (int i = 1; i <= m; i++) {
        
        cout << n * i << " ";
    }

    cout << endl; 
    return 0;

}