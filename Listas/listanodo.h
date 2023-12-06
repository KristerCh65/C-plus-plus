#ifndef NODO_H
#define NODO_H

using namespace std;

class nodo
{
	public:
		int id;
		
		string nombre;
		int nota1;
		int nota2;
		
		nodo *sig;
		
		int promedio(){
			return (nota1+nota2)/2;
		}
	protected:
};

#endif
