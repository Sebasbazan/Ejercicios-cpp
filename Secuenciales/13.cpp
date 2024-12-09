#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}
