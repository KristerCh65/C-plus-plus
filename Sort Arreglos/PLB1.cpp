#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void suma(int,int);

int main(int argc, char** argv) {
	int n1, n2;
	
	cout<<"Ingrese N1"<<endl;
	cin>>n1;
	cout<<"Ingrese N2"<<endl;
	cin>>n2;
	suma(n1,n2);
	
	return 0;
}

void suma(int x, int y){
	cout<<"Resultado: "<<x+y;
}

