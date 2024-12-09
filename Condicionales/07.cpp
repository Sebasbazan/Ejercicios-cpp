#include<iostream>
int main(){
    int num1, num2, num3;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    int numero_intermedio = (num1 + num2 + num3 - std::max(std::max(num1, num2), num3) - std::min(std::max(num1, num2), std::min(num1, num2)));

    std::cout << "El numero intermedio es: "<< numero_intermedio << std::endl;

    return 0;
}