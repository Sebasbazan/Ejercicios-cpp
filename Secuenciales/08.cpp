#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    
    float radio, altura, areaBase, areaLateral, areaTotal;
 
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    areaBase = M_PI * pow(radio, 2);               
    areaLateral = 2 * M_PI * radio * altura;       
    areaTotal = 2 * areaBase + areaLateral;        

    cout << "El área de la base es: " << areaBase << " unidades cuadradas" << endl;
    cout << "El área lateral es: " << areaLateral << " unidades cuadradas" << endl;
    cout << "El área total es: " << areaTotal << " unidades cuadradas" << endl;

    return 0;
}