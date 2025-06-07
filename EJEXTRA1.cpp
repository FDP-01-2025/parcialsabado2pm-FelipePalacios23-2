#include <iostream>
#include <cstring>
using namespace std;
int main(){
char nombre[20];
char libro [30];
int carnet [8];
int opcion;



    cout<<"Ingrese su nombre\n"; 
    cin>>nombre;
    cout<<"Ingrese su carnet\n";
    cin>>carnet[8];

do{

    cout<<"Por favor seleccione una de las siguientes opciones:\n";
    cout<<"1 = Prestar Libro\n";
    cout<<"2 = Devolver LIbro\n";
    cout<<"3 = Salir\n";

    cin>>opcion;

    switch (opcion) {
        case 1: {
            cout<<"Porfavor ingrese el titulo del libro que desea prestar\n";
            cin>>libro;
            cout<<"Prestamo exitoso\n";
        break;
        }
        case 2: {
            cout<<"Que libro desea devolver?\n";
            cout<<"- " <<libro <<endl;
            cin>>libro;
            if (libro) {
                
                cout<<"Devuelto exitosamente\n";
            }
            else {
                cout<<"Seleccione un libro valido\n";
            }
        break;
        }
        case 3: {
            return 0;
        break;
        }
    }
  }
while (opcion!=3);
}
