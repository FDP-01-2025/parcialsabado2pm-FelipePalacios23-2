#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int contra [8];

    do{
    cout<<"Ingrese una contraseña de 8 o mas caracteres\n";
    cin.getline(contra, 8, '\n');
    if (sizeof contra = 8){
        cout<<"Guardada exitosamente\n";
    }
    else {
        cout<<"Ingrese una contraseña valida\n";
    }
    }
    while (sizeof contra > 8);

return 0;
}