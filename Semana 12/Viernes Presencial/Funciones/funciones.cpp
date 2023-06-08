
#include "funciones.h"


bool esDivisor(int num, int div){
	return num%div == 0;
}
	
bool esPrimo(int num){
	int divisores = 0;
	
	for(int i=1; i<=num; i++){
		if(esDivisor(num, i)){
			divisores++;
		}
	}
	
	return divisores == 2;
}
	
	
	/*
	
	bool esPrimo(int num){
	int divisores = 0;
	
	for(int i=1; i<=num; i++){
	if(num%i == 0){
	divisores++;
	}
	}
	
	if(divisores == 2){
	return true;
	}
	else{
	return false;
	}
	}
	*/
	
