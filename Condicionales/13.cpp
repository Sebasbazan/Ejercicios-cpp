#include <iostream>  
using namespace std;  

int main() {  
    int numero;  
 
    cout << "Ingrese un numero entero positivo de tres cifras: ";  
    cin >> numero;  
 
    if (numero < 100 || numero > 999) {  
        cout << "El numero debe ser de tres cifras." << endl;  
        return 1;  
    }  

    int cifra1 = numero / 100;            
    int cifra2 = (numero / 10) % 10;      
    int cifra3 = numero % 10;           
 
    bool sonConsecutivas = (cifra1 + 1 == cifra2 && cifra2 + 1 == cifra3) ||   
                           (cifra1 - 1 == cifra2 && cifra2 - 1 == cifra3);  
 
    if (sonConsecutivas) {  
        cout << "Las cifras son consecutivas." << endl;  
    } else {  
        cout << "Las cifras no son consecutivas." << endl;  
    }  

    return 0;  
}