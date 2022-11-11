#include <iostream>

using namespace std;

int main(){
    string nombre;
    //unsigned nos permite solo almacenar valores positivos, eliminando todo valor negativo
    //tambien nos duplica el espacio del numero aceptado, unsigned lo podemos utilizar en
    //todo tipo de variables enteras 
    unsigned short edad;
    cout<<"Hola Mundo"<<endl;
    cout<<"Ingresa tu nombre"<<endl;
    cin>>nombre;
    cout<<"Bienvenido: " + nombre<<endl;
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cout<<"Tu edad es de: " + edad<<endl;
    return 0;
    system("pause");
}
    
    