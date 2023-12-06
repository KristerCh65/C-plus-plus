#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct{
	int codigo;
	string nombre;
}v[5];

int n,m;

int main(int argc, char** argv) {
	
	for(int i=0;i<5;i++){
		cout<<"Numero "<<i+1<<endl;
		cout<<"Ingrese codigo de Usuario: "<<endl;
		cin>>v[i].codigo;
		cout<<"Ingrese Nombre de Usuario: "<<endl;
		cin>>v[i].nombre;
		cout<<endl;
	}
	
	cout<<"Para Ordenar de Manera Ascendente 1 y de Manera Descendente 0"<<endl;
	cin>>m;
	      
    for(int i=0;i<5;i++){
    	for(int b=i+1;b<5;b++){
    		if(m==0){     
        		if(v[i].codigo < v[b].codigo){     
            		n = v[i].codigo; 
            		v[i].codigo = v[b].codigo; 
            		v[b].codigo = n; 
        		} 
    		}else if(m==1){ 
        		if(v[i].codigo > v[b].codigo){     
            		n = v[i].codigo; 
            		v[i].codigo = v[b].codigo; 
            		v[b].codigo = n; 
        		} 
    		} 
		}
	}  
	
	cout<<"Registros Ordenados: "<<endl; 
    for (int i=0;i<5;i++){ 
        cout<<v[i].codigo<<endl;
		cout<<v[i].nombre<<endl;
		cout<<endl;
    } 
	
	return 0;
}
