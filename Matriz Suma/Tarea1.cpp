#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int num;
int res1;
int res2;
int res3;
int res4;
int fn;

int main(int argc, char** argv) {
	
	cout<<"Ingrese un Numeero entre 101 y 999"<<endl;
	cin>>num;
	
	res3 = num/100;
	res1 = num%100;
	res2 = res1%10;
	res4 = res1/10;
	fn = ((res2*100)+(res4*10)+res3);

	cout<<"Cifras a la Inversa"<<endl;
	cout<<fn;
	
	system("pause");
	return 0;
}
