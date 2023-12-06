#ifndef LISTA_H
#define LISTA_H
#include <string>

using namespace std;

class Lista
{
	public:
		string nota1;
		string nota2;
		string nombre;
		
		Lista *sig;
		Lista *ant;
	protected:
};

#endif
