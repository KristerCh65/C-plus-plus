#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int n1;

int main(int argc, char** argv) {

	for(int i = 0; i < 5; i++){
		for(int a = 0; a < i; a++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
