#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x;
int *puntero;

int main(int argc, char** argv) {
	x = 5;
	puntero=&x;
	cout<<x<<endl;
	cout<<&x<<endl;
	
	cout<<puntero<<endl;
	
	return 0;
}
