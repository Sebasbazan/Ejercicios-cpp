#include <iostream>
#include <algorithm>

int main() {
    int num;
    std::cout << "Ingrese un numero de 4 cifras: ";
    std::cin >> num;

    
    int digito1 = num / 1000;
    int digito2 = (num / 100) % 10;
    int digito3 = (num / 10) % 10;
    int digito4 = num % 10;

    
    int mayor = std::max(digito1, std::max(digito2, std::max(digito3, digito4)));
    int menor = std::min(digito1, std::min(digito2, std::min(digito3, digito4)));

    
    int mayor_numero = mayor * 10 + menor;

    std::cout << "El mayor numero de dos cifras que se puede formar es: " << mayor_numero << std::endl;

    return 0;
}