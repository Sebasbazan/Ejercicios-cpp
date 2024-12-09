#include <iostream>
#include <iomanip>

int main() {
    double importe;
    double porcentaje_descuento;
    int unidades_adquiridas;
    int caramelos;

    std::cout << "Ingrese el importe de la compra: ";
    std::cin >> importe;

    
    if (importe <= 500) {
        porcentaje_descuento = 0.12;
    } else if (importe > 500 && importe <= 700) {
        porcentaje_descuento = 0.14;
    } else {
        porcentaje_descuento = 0.16;
    }

    
    if (importe >= 1 && importe <= 50) {
        unidades_adquiridas = 1;
        caramelos = 5;
    } else if (importe >= 51 && importe <= 100) {
        unidades_adquiridas = 10;
        caramelos = 10;
    } else {
        unidades_adquiridas = 15;
        caramelos = 15;
    }

    
    double importe_total = importe - (importe * porcentaje_descuento);

    // Mostrar los resultados
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Importe de la compra: S/. " << importe << std::endl;
    std::cout << "Porcentaje de descuento: " << porcentaje_descuento * 100 << "%" << std::endl;
    std::cout << "Importe total a pagar: S/. " << importe_total << std::endl;
    std::cout << "Unidades adquiridas: " << unidades_adquiridas << std::endl;
    std::cout << "Caramelos recibidos: " << caramelos << std::endl;

    return 0;
}