#include <iostream>
#include <thread>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hilo(int x, int t){
	int cont=0;
	while(0==0){
		cont++;
		cout<<"hilo numero "<<x<<" #"<<cont<<endl;
		this_thread::sleep_for(chrono::milliseconds(t+1000));
	}
}

int main(int argc, char** argv) {
	srand(time(NULL));
	
	thread x(hilo,1,1);
	thread y(hilo,2,4000);
	
	x.join();
	y.join();
	
	return 0;
}
