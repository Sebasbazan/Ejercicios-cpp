#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int encontrarMenor(const vector<int>& numeros, int indice = 0, int menor = INT_MAX) {
    return (indice == numeros.size()) 
        ? menor 
        : encontrarMenor(numeros, indice + 1, numeros[indice] < menor ? numeros[indice] : menor);
}

int encontrarMayor(const vector<int>& numeros, int indice = 0, int mayor = INT_MIN) {
    return (indice == numeros.size()) 
        ? mayor 
        : encontrarMayor(numeros, indice + 1, numeros[indice] > mayor ? numeros[indice] : mayor);
}

double calcularPromedio(const vector<int>& numeros) {
    return static_cast<double>(accumulate(numeros.begin(), numeros.end(), 0)) / numeros.size();
}

int main() {
    vector<int> numeros(10);
    cout << "Ingrese 10 numeros:" << endl;

    for (int i = 0; i < 10; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int menor = encontrarMenor(numeros);
    int mayor = encontrarMayor(numeros);
    double promedio = calcularPromedio(numeros);

    cout << "\nResultados:" << endl;
    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
