#include <iostream>
#include <ctime>
using namespace std;
#include "funciones.h"

int main(){
	srand(time(0));
	int vNumeros[10];
	// cargar 10 numeros
	cargarVectorAleatorio(vNumeros, 10);
	mostrarVector(vNumeros, 10);
	
	/// buscar mayor
	int mayor = buscarMayor(vNumeros, 10);
	
	// mostrar el mayor
	cout << "El mayor es: " << mayor << endl;
	
	/// mostrar posiciones del mayor
	mostrarPosiciones(mayor, vNumeros, 10);
	
	
	return 0;
}
