#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int op;
int n1;
int n2;


void ing();
void suma();
void resta();
void multi();
void div();
void menu();


int main(int argc, char** argv) {
        
        do{
                system("cls");
                menu();
                
                switch(op){
                        case 1:
                                suma();
                                system("pause");
                                break;
                        case 2:
                                resta();
                                system("pause");
                                break;
                        case 3:
                                multi();
                                system("pause");
                                break;
                        case 4:
                                div();
                                system("pause");
                                break;
                        case 0:
                                cout<<"Hasta Luego...";
                                break;
                        default:
                                cout<<"Opcion no valida!!!";
                                system("pause");
                }
        
        }while(op!=0);


        return 0;
}


        void ing(){
                cout<<"Ingrese N1:\n";
                cin>>n1;
                cout<<"Ingrese N2:\n";
                cin>>n2;
        }
        
        void suma(){
                ing();
                cout<<"El resultado es: "<<n1+n2<<endl;
        }
        
        void resta(){
                ing();
                cout<<"El resultado es: "<<n1-n2<<endl;
        }
        
        void multi(){
                ing();
                cout<<"El resultado es: "<<n1*n2<<endl;
        }
        
        void div(){
                ing();
                cout<<"El resultado es: "<<n1/n2<<endl;
        }
        
        void menu(){
                cout<<"\t\t\tMenu"<<endl;
                cout<<"\t 1) Suma"<<endl;
                cout<<"\t 2) Resta"<<endl;
                cout<<"\t 3) Multiplicacion"<<endl;
                cout<<"\t 4) Division"<<endl;
                cout<<"\t 0) Salir"<<endl;
                
                cout<<"\t\t Seleccione una opcion"<<endl;
                cin>>op;
        }
