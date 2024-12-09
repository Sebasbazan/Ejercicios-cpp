#include <iostream>

int main() {
    double angulo;

    std::cout << "Ingrese el angulo en grados: ";
    std::cin >> angulo;

    
    if (angulo == 0) {
        std::cout << "El angulo es nulo." << std::endl;
    } else if (angulo > 0 && angulo < 90) {
        std::cout << "El angulo es agudo." << std::endl;
    } else if (angulo == 90) {
        std::cout << "El angulo es recto." << std::endl;
    } else if (angulo > 90 && angulo < 180) {
        std::cout << "El ángulo es obtuso." << std::endl;
    } else if (angulo == 180) {
        std::cout << "El angulo es llano." << std::endl;
    } else if (angulo > 180 && angulo < 360) {
        std::cout << "El angulo es cóncavo." << std::endl;
    } else if (angulo == 360) {
        std::cout << "El angulo es completo." << std::endl;
    } else {
        std::cout << "El angulo ingresado no es valido." << std::endl;
    }

    return 0;
}