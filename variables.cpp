#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
    string nom;
    unsigned short edad;
    double salario;
    cout<<"Bienvenido, este programa se creo con el fin de probar variables"<<endl;
    //Para evitar errores y problemas en los saltos de linea, se recomienda primero solicitar los datos string y luego los numericos.
    cout<<"Ingresa tu nombre completo\n";
    getline(cin, nom);
    system("cls");
    cout<<"Ingresa tu edad:\n";
    cin>>edad;
    system("cls");
    cout<<"Ingresa tu paga mensual\n";
    cin>>salario;
    salario = salario * 12;
    cout<<"Tu nombre es: " + nom + " y tu edad es de: "<<edad<<" tu sueldo anual es: "<<salario<<endl;
    system("pause");
    return 0;
   

}