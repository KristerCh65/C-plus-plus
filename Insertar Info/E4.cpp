#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int num1, num2, suma, resta, div, multi;
	cout<<"Ingrese un numero"<<endl;
	cin>>num1;
	cout<<"Ingrese otro numero"<<endl;
	cin>>num2;
	
	suma = num1 + num2;
	resta = num1 - num2;
	div = num1 / num2;
	multi = num1 * num2;
	
	cout<<"La suma de los Numeros es: "<<suma<<endl;
	cout<<"La resta de los numeros es: "<<resta<<endl;
	cout<<"La multiplicacion es igual a: "<<multi<<endl;
	cout<<"La dividion es igual a: "<<div<<endl;
	
	return 0;
}
