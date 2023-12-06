#ifndef INFO_H
#define INFO_H
#include "string"

using namespace std;

class Info
{
	public:
		int num;
		string nombre;
		string apellido;
		
		Info *nx;
		Info *ant;
	protected:
};

#endif
