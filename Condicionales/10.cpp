#include <iostream>  
#include <algorithm> // Para usar std::sort  
using namespace std;  

int main() {  
    const int NUM_NOTAS = 5;  
    float notas[NUM_NOTAS];  
  
    cout << "Ingrese las 5 notas del curso: " << endl;  
    for (int i = 0; i < NUM_NOTAS; ++i) {  
        cout << "Nota " << (i + 1) << ": ";  
        cin >> notas[i];  
    }  

    sort(notas, notas + NUM_NOTAS);  
     
    cout << "Nota eliminada (menor): " << notas[0] << endl;  
    cout << "Nota eliminada (mayor): " << notas[NUM_NOTAS - 1] << endl;  

      
    float suma = 0.0;  
    for (int i = 1; i < NUM_NOTAS - 1; ++i) {  
        suma += notas[i]; 
    }  
    float promedio = suma / (NUM_NOTAS - 2);   

    cout << "Promedio aprobatorio: " << promedio << endl;  

    return 0;  
}