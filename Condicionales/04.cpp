#include <iostream>
#include <iomanip>

int main() {
    double nota1, nota2, nota3, promedio_final;

    std::cout << "Ingrese la nota de la primera practica calificada: ";
    std::cin >> nota1;
    std::cout << "Ingrese la nota de la segunda practica calificada: ";
    std::cin >> nota2;
    std::cout << "Ingrese la nota de la tercera practica calificada: ";
    std::cin >> nota3;

    if (nota3 >= 10) {
        nota3 += 2; 
    }

    promedio_final = (nota1 + nota2 + nota3) / 3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "El promedio final del alumno es: " << promedio_final << std::endl;

    return 0;
}