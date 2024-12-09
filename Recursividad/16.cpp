#include <iostream>
using namespace std;

void invertirCadena(string& texto, int inicio, int fin) {
    (inicio < fin) 
        ? swap(texto[inicio], texto[fin]), invertirCadena(texto, inicio + 1, fin - 1) 
        : void();
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    invertirCadena(texto, 0, texto.size() - 1);

    cout << "Cadena invertida: " << texto << endl;

    return 0;
}
