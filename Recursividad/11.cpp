#include <iostream>
#include <string>

class PalindromeFinder {
private:
    int totalCapicuas = 0;

    bool esCapicuaRecursivo(const std::string& num, int inicio, int fin) {

        if (inicio >= fin) {
            return true;
        }

        if (num[inicio] != num[fin]) {
            return false;
        }
        return esCapicuaRecursivo(num, inicio + 1, fin - 1);
    }

    bool esCapicua(int numero) {
        return esCapicuaRecursivo(std::to_string(numero), 0, 
                                  std::to_string(numero).length() - 1);
    }

    void encontrarCapicuas(int inicio, int fin) {

        if (inicio > fin) return;

        if (esCapicua(inicio)) {
            std::cout << inicio << std::endl;
            totalCapicuas++;
        }
        
        
        encontrarCapicuas(inicio + 1, fin);
    }

public:
    
    void mostrarCapicuas() {
        std::cout << "Numeros capicua de 3 cifras:\n" << std::endl;
        totalCapicuas = 0;
        encontrarCapicuas(100, 999);
        std::cout << "\nTotal de numeros capicua: " << totalCapicuas << std::endl;
    }
};

int main() {
    PalindromeFinder finder;
    finder.mostrarCapicuas();
    return 0;
}