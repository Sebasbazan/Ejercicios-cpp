#include<iostream>
using namespace std;
void mostrarRectangulo(int n, int fila = 0){
    (fila >= n)
    ? void()
    :(cout << string(2*n, '*')<< endl, mostrarRectangulo(n, fila +1)); 
}
int main(){
    int n;
    cout << "Ingrese la altura del rectangulo (n >= 4): ";
    cin >> n;
    if ( n < 4 ){
        cout << "El valor de n debe ser mayor o igual a 4." << endl;
        return 1;
    }

    cout << "Rectangulo de asteriscos: " << endl;
    mostrarRectangulo(n);

    return 0;
}