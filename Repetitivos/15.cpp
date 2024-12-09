#include <iostream>
#include <string>

class ConvertidorTexto {
public:
    
    std::string aMayusculas(const std::string& texto) {
        std::string resultado = texto;
        
        
        for (char& caracter : resultado) {
            
            if (caracter >= 'a' && caracter <= 'z') {
                caracter = caracter - 'a' + 'A';
            }
        }
        
        return resultado;
    }

    
    std::string aMinusculas(const std::string& texto) {
        std::string resultado = texto;
        
        
        int i = 0;
        while (i < resultado.length()) {
            
            if (resultado[i] >= 'A' && resultado[i] <= 'Z') {
                resultado[i] = resultado[i] - 'A' + 'a';
            }
            i++;
        }
        
        return resultado;
    }
};

int main() {
    ConvertidorTexto convertidor;
    std::string texto;

    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);

    std::string mayusculas = convertidor.aMayusculas(texto);
    std::string minusculas = convertidor.aMinusculas(texto);

    std::cout << "Texto en mayusculas: " << mayusculas << std::endl;
    std::cout << "Texto en minusculas: " << minusculas << std::endl;

    return 0;
}