#include <iostream>
using namespace std;

/**
Hacer un programa donde se ingresen 3 numeros enteros y muestre un cartel aclaratorio:
    "TODOS POSITIVOS" si todos los numeros son positivos
    "ALGUNOS POSITIVOS" si alguno de los numeros es positivo
    "NINGUNO POSITIVO" si ninguno de los numeros es positivo
*/

/*
Datos de entrada:
primerNumero, segundoNumero, tercerNumero

Dato salida:
mensaje

Operaciones:
mensaje = "Todo positivos" => cuando los 3 numeros son mayores a cero
mensaje = "Alguno positivo" => cuando cualquiera de los 3 sean mayores a cero
mensaje = "Ninguno positivo" => cuando todos sean menores o iguales a cero

// estrategia anidados
*/


/**
OPERADORES LOGICO

&& AND que significa Y
|| OR que signica O
!  NOT  NO

*/

int main(int argc, char *argv[]) {
	// declaracion
	int primerNumero, segundoNumero, tercerNumero;
	string mensaje;
	
	
	// datos de entrada
	cout << "Ingrese primer numero :";
	cin >> primerNumero;
	
	cout << "Ingrese segundo numero :";
	cin >> segundoNumero;
	
	cout << "Ingrese tercer numero :";
	cin >> tercerNumero;
	
	/// operaciones
	
	if(primerNumero > 0 && segundoNumero > 0 && tercerNumero > 0 ){
		mensaje = "TODO POSITIVOS";
	}
	else{
		if(primerNumero > 0 || segundoNumero > 0 || tercerNumero > 0){
			mensaje = "ALGUNO POSITIVO";
		}
		else{
			mensaje = "NINGUNO POSITIVO";
		}
	}

	
	// datos de salida
	cout << mensaje;
	
	
	return 0;
}

