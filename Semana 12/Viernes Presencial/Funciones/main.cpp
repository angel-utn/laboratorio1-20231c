#include <iostream>

using namespace std;
#include "funciones.h"

void funValor(int n){
	n += 5;
	cout << n << endl;
}
	
void funRef(int &n){
	n += 5;
	cout << n << endl;
}
	
void funDir(int *n){
	cout << n << endl;
}

int main(){
	int var = 10;
	//funValor(3);
	 funRef(20);
	
	//funDir(&var);
	cout << "Var: " << var << endl;
	//funValor(var + 20);
	
	return 0;
}
	
