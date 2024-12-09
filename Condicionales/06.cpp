#include <iostream>

int main() {
    int edad1, edad2, edad3;
    int edad_menor, edad_mayor;

    std::cout << "Ingrese la primera edad: ";
    std::cin >> edad1;
    std::cout << "Ingrese la segunda edad: ";
    std::cin >> edad2;
    std::cout << "Ingrese la tercera edad: ";
    std::cin >> edad3;

    if (edad1 <= edad2 && edad1 <= edad3) {
        edad_menor = edad1;
    } else if (edad2 <= edad1 && edad2 <= edad3) {
        edad_menor = edad2;
    } else {
        edad_menor = edad3;
    }

    if (edad1 >= edad2 && edad1 >= edad3) {
        edad_mayor = edad1;
    } else if (edad2 >= edad1 && edad2 >= edad3) {
        edad_mayor = edad2;
    } else {
        edad_mayor = edad3;
    }

    std::cout << "La edad menor es: " << edad_menor << std::endl;
    std::cout << "La edad mayor es: " << edad_mayor << std::endl;

    return 0;
}