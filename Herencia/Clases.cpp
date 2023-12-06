#include <iostream>
#include <string.h>
#include "alumno.h"
#include "hijo.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Hijo h=Hijo(80);

int main(int argc, char** argv) {
	cout<<"Ingrese Nomre"<<endl;
	cin>>h.nombre;
	cout<<"Ingrese Nota 1"<<endl;
	cin>>h.nota1;
	cout<<"Ingrese Nota 2"<<endl;
	cin>>h.nota2;
	
	h.hijos="Monton";
	cout<<"Nombre: "<<h.nombre<<endl;
	cout<<"Nota 1: "<<h.nota1<<endl;
	cout<<"Nota 2: "<<h.nota2<<endl;
	h.total();
	
	cout<<"Hijo: "<<h.Hijos();
	h.total_h;
	
	return 0;
}

