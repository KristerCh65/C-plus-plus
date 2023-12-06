#ifndef HIJO_H
#define HIJO_H

#include "Alumno.h"
using namespace std;

class Hijo: public Alumno: public padre{
	public 
	Hijo(int x):Alumno(x){
		z = X;
	}
	
	int z;
	string hijos;
	
	void total_h(){
		cout<<"Total Hijo: "<<prom+acumulado+10;
	}
	
	protected:
};

#endif

