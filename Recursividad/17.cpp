#include <iostream>
using namespace std;

int indexOf(const string& texto, char caracter, int indice = 0) {
    return (indice >= texto.size()) 
        ? -1 
        : (texto[indice] == caracter ? indice : indexOf(texto, caracter, indice + 1));
}

int main(){
    string texto;
    char caracter;
    cout<<"Ingrese una cadena de texto: ";
    getline(cin, texto);

    cout << "Ingrese el caracter a buscar: ";
    cin >> caracter;

    int indice = indexOf(texto, caracter);

    if(indice != -1)
     if (indice != -1)
        cout << "El caracter '" << caracter << "' se encuentra en la posicion: " << indice << endl;
    else
        cout << "El caracter '" << caracter << "' no se encuentra en la cadena." << endl;

    return 0;
}