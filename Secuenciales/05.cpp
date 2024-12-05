#include<iostream>
using namespace std;
int main(){
    long long gigabytes, megabytes, kilobytes, bytes;

    cout<<"Ingrese la cantidad del disco duro en gigabytes: ";
    cin >> gigabytes;

    megabytes = gigabytes * 1024;
    kilobytes = megabytes * 1024;
    bytes = kilobytes*1024;

    cout<<"Cantidad de megabytes: "<< megabytes << "MB" << endl;
    cout<<"Cantidad de kilobytes: "<< kilobytes << "KB" << endl;
    cout<<"Cantidad de bytes: "<< bytes << "bytes" << endl;

    return 0;
}