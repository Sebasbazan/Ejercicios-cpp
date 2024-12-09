#include <iostream>
#include <string>
using namespace std;
string ltrim(const string& texto, size_t indice = 0) {
    return (indice >= texto.size() || texto[indice] != ' ') 
        ? texto.substr(indice) 
        : ltrim(texto, indice + 1);
}

string rtrim(const string& texto, size_t indice = 0) {
    size_t tam = texto.size();
    return (tam == 0 || texto[tam - 1 - indice] != ' ') 
        ? texto.substr(0, tam - indice) 
        : rtrim(texto.substr(0, tam - 1), indice + 1);
}

string alltrim(const string& texto){
    return rtrim(ltrim(texto));
}

int main(){
    string texto;

    cout << "Ingrese una cadena de texto con espacios: ";
    getline(cin, texto);

    cout << "Texto original: [" << texto << "]" << endl;
    cout << "Texto con ltrim: [" << ltrim(texto) << "]" << endl;
    cout << "Texto con rtrim: [" << rtrim(texto) << "]" << endl;
    cout << "Texto con alltrim: [" << alltrim(texto) << "]" << endl;

    return 0;
}