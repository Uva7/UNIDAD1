#include "iostream"
#include "string"
#include "math.h"

using namespace std;

int main()
{
//Mensaje de bienvenida
cout << "Hola este programa 1.8 imprime la matricula y el promedio de 5 notas de un alumno" << "\n";

int matricula, a, b, c, d, e;
/*
cout<<"Introduzca el numero de matricula del alumno: ";
cin>>matricula;*/

cout<<"Introduzca el numero de matricula del alumno: ";
cin>>a;

cout<<"Introduzca el numero de matricula del alumno: ";
cin>>b;

cout<<"Introduzca el numero de matricula del alumno: ";
cin>>c;

cout<<"Introduzca el numero de matricula del alumno: ";
cin>>d;

cout<<"Introduzca el numero de matricula del alumno: ";
cin>>e;

cout<<"La matricula del alumno es  "<<matricula<<endl;

cout<<"El promedio es: "<<(a+b+c+d+e)/5<<endl;

cin.get();cin.get();

return 0;
}
