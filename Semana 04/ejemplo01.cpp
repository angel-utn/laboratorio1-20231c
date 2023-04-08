/**
Hacer un programa donde se ingresen 3 numeros enteros y muestre un cartel aclaratorio:
    "TODOS POSITIVOS" si todos los numeros son positivos
    "ALGUNOS POSITIVOS" si alguno de los numeros es positivo
    "NINGUNO POSITIVO" si ninguno de los numeros es positivo

	Datos de entrada:
		primerNumero, segundoNumero, tercerNumero

	Dato salida:
		mensaje

	Operaciones:
		mensaje = "Todo positivos" => cuando los 3 numeros son mayores a cero
		mensaje = "Alguno positivo" => cuando al menos uno de los 3 sean mayor a cero
		mensaje = "Ninguno positivo" => cuando todos sean menores o iguales a cero
*/

#include <iostream>
using namespace std;

int main(){

  int numero;
  int cantidadPositivos = 0;
  string mensaje;

  cout << "Ingresar cinco números: " << endl;

  cin >> numero;
  if (numero > 0){
    cantidadPositivos++; // contador
  }

  cin >> numero;
  if (numero > 0){
    cantidadPositivos++; // contador
  }

  cin >> numero;
  if (numero > 0){
    cantidadPositivos++; // contador
  }

  cin >> numero;
  if (numero > 0){
    cantidadPositivos++; // contador
  }

  cin >> numero;
  if (numero > 0){
    cantidadPositivos++; // contador
  }

  /// Operaciones
  if (cantidadPositivos == 5){
    mensaje = "Todos son positivos";
  }
  else{
    if (cantidadPositivos == 0){
      mensaje = "Ninguno es positivo";
    }
    else{
      mensaje = "Alguno es positivo";
    }
  }


  cout << endl << mensaje;


  return 0;
}
