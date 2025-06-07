#include <iostream>
using namespace std;
int main(){
int num;

    cout<<"Por favor ingrese un numero\n";
    cin>>num;
    if (num<0){
        cout<<"Su numero es negativo\n";
    }
    else if (num=0){
        cout<<"Su numero es cero\n";
    }
    else if (num>0){
        cout<<"Su numero es mayor que cero\n";
    }
    else {
        cout<<"Ingrese un numero valido\n";
    }
return 0;
//fin
}