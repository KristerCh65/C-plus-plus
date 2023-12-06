#include "Alumno.h"

Alumno::Alumno(int n){
	nota2=n;
}

int Alumno::promedio(){
	return (nota1+nota2)/2
}

void Alumno::total(){
	cout<<"Su promedio es: "<<promedio();
	prom = promedio();
	acumulado=5;
	
	cout<<"Su nota total es: "<<prom+acumulado<<endl;
}
