#include <iostream>  
using namespace std;  

int main() {  
    const float BASE_TIP = 20.0;  
    const float TIP_PER_EXAM = 5.0; 
    int examsPassed;  
  
    cout << "Ingrese la cantidad de examenes aprobados (0 a 3): ";  
    cin >> examsPassed;  
  
    examsPassed = (examsPassed > 3) ? 3 : (examsPassed < 0) ? 0 : examsPassed;  
 
    float totalTip = BASE_TIP + (examsPassed * TIP_PER_EXAM);  

    cout << "El monto total de la propina es: S/. " << totalTip << endl;  

    return 0;  
}