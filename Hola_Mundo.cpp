#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <string>

using namespace std;

int main(){
    string nombre;
    //unsigned nos permite solo almacenar valores positivos, eliminando todo valor negativo
    //tambien nos duplica el espacio del numero aceptado, unsigned lo podemos utilizar en
    //todo tipo de variables enteras 
    unsigned short edad;
    float salario;
    cout<<"Hola Mundo"<<endl;
    cout<<"Ingresa tu nombre"<<endl;
    getline(cin, nombre); //getline se utiliza para guardar informacion de tipo string
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cout<<"Ingresa tu salario: ";
    cin>>salario;
    system("cls");
    cout<<"Bienvenido: " + nombre<<endl;
    cout<<"Tu edad es de: "<<edad<<" años"<<endl;
    salario = salario *12;
    cout<<"Tu salario anual es: "<<salario<<endl;;
    system("pause");
    return 0;
    
}
    
    