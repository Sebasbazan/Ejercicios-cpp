#include <iostream>

using namespace std;

int main() {
    int contador = 0; 

    cout << "Numeros de 4 cifras que cumplen la condicion:" << endl;

    for (int numero = 1000; numero <= 9999; numero++) {
        int sumaPares = 0, sumaImpares = 0;
        int n = numero;

        while (n > 0) {
            int digito = n % 10; 
            if (digito % 2 == 0) {
                sumaPares += digito; 
            } else {
                sumaImpares += digito; 
            }
            n /= 10; 
        }

        if (sumaPares == sumaImpares) {
            cout << numero << " ";
            contador++; 
        }
    }

    cout << endl << "Cantidad de números encontrados: " << contador << endl;

    return 0;
}
