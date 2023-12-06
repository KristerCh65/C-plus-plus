#include <iostream>
#include<fstream>
#include "string"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct al{
string nombre;
string n1;
string n2;
};

al alumno[5];

void guardar(); 
void leer();
void presentar();
string var;
int contar=0;
int op;

int main(int argc, char** argv) {
	do{
		cout<<"\t MENU"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Guardar"<<endl;
		cout<<"3) Leer"<<endl;
		cout<<"4) Presentar"<<endl;
		cout<<"0) salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<"ingrese nombre"<<endl;
				cin>>alumno[contar].nombre;
				cout<<"nota 1"<<endl;
				cin>>alumno[contar].n1;
				cout<<"nota 2"<<endl;
				cin>>alumno[contar].n2;
				contar++;
				break;
			case 2:
				guardar();
				break;
			case 3:
				leer();
				break;
			case 4:
				presentar();
				break;
		}
		
	}while(op!=0);
	
	/*
	cout<<"ingrese texto"<<endl;
	cin>>var;
	guardar();
	leer();
	system("pause");
	*/
	
	return 0;
}

void guardar(){
	ofstream archivo;
	//archivo.open("c:\\archivo\\empleado");
	archivo.open("c:\\archivo\\empleado.txt",ios::app);
	for(int i=0;i<contar;i++){
		archivo<<alumno[i].nombre<<"\n";
		archivo<<alumno[i].n1<<"\n";
		archivo<<alumno[i].n2<<"\n";
	}
	//archivo<<texto<<"\n";
	archivo.close();
}
void leer(){
	string texto;
	int i=0;
	fstream l_archivo;
	l_archivo.open("c:\\archivo\\empleado.txt");
	while(!l_archivo.eof()){
		alumno[i].nombre=texto;
		l_archivo>>texto;
		alumno[i].n1=texto;
		l_archivo>>texto;
		alumno[i].n2=texto;
		l_archivo>>texto;
		
		/*cout<<texto<<endl;
		l_archivo>>texto;*/
		i++;
	}
	l_archivo.close();
}
void presentar(){
	for(int i=0;i<=contar;i++){
		cout<<i<<"Nombre"<<alumno[i].nombre<<endl;
		cout<<"\t"<<i+1<<"Nota 1"<<alumno[i].n1<<endl;
		cout<<"\t"<<i+1<<"Nota 2"<<alumno[i].n2<<endl;
	}
}
