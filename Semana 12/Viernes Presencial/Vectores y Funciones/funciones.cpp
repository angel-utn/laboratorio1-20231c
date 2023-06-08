#include <iostream>
using namespace std;
#include "funciones.h"
void cargarVectorAleatorio(int vec[], int cant){
	for(int i=0; i<cant; i++){
		vec[i] = rand()%10  + 1;
	}
}

void cargarVector(int vec[], int cant){
	for(int i=0; i<cant; i++){
		cout << "Ingrese numero: " ;
		cin >> vec[i];
	}
	
}
void mostrarVector(int vec[], int cant){
	for(int i=0; i<cant; i++){
		cout << "Numero #"<<i+1 << ": " << vec[i] << endl;
	}
}
	
int buscarMayor(int vec[], int cant){
	int max = vec[0];
	
	for(int i=1; i<cant; i++){
		if(vec[i]>max){
			max = vec[i];
		}
	}
	
	return max;
}
	
void mostrarPosiciones(int valor, int vec[], int cant){
	for(int i=0; i<cant;i++){
		if(vec[i] == valor){
			cout << i+1 << endl;
		}
	}
}

	
void recibeMatriz(int mat[5][3]){
	
}





