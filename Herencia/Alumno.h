#include <iostream>

#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;

class alumno{
	public:
		Alumno(int j);
		string nombre;
		int nota1;
		int nota2;
		void total();
	
	private:
		int promedio();
		
	protected:
		int acumulado;
		int prom;
};

#endif
