#include <iostream>
#include <cctype> 
using namespace std;

void convertirAMayusculas(string& texto, int indice = 0) {
    (indice < texto.size()) 
        ? texto[indice] = toupper(texto[indice]), convertirAMayusculas(texto, indice + 1) 
        : void();
}

void convertirAMinusculas(string& texto, int indice = 0) {
    (indice < texto.size()) 
        ? texto[indice] = tolower(texto[indice]), convertirAMinusculas(texto, indice + 1) 
        : void();
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    string textoMayus = texto;
    string textoMinus = texto;

    convertirAMayusculas(textoMayus);
    convertirAMinusculas(textoMinus);

    cout << "Texto en mayusculas: " << textoMayus << endl;
    cout << "Texto en minusculas: " << textoMinus << endl;

    return 0;
}
