#include <iostream>
using namespace std;

int main() {
	const int CANTIDAD_NUMEROS = 3;
	float numero, mayor, smayor;
	

	for(int i=1; i<=CANTIDAD_NUMEROS; i++){
		cout << "Ingrese Numero: ";
		cin >> numero;
		
		if(i == 1){
			mayor = numero;
		}
		else if(numero > mayor){
			smayor = mayor;
			mayor = numero;
		}
		else if(i == 2 || numero > smayor){
			smayor = numero;
		}
	}
	
	cout << "El mayor es: " << mayor << endl;
	cout << "El segundo mayor es: " << smayor << endl;
	
	return 0;
}

