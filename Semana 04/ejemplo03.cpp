/**
  Hacer un programa para que el usuario ingrese un número entero positivo por teclado
  y se puedan visualizar los números existentes entre el ingresado (inclusive) y el cero.
  Y además, los números existentes entre el cero y el número ingresado (inclusive)

  Datos de entrada:
  - El número que ingresa el usuario (entero positivo)

  Proceso:
  - Mostrar los números entre el ingresado y el cero.
  - Mostrar los números entre el cero y el número ingresado

  Info de salida:
  - ??? de números enteros

*/

#include <iostream>
using namespace std;

int main(){
  int numero, i;

  cout << "Ingresar número inicial: ";
  cin >> numero;

  cout << "Decreciente:" << endl;
  for(i=numero; i>=0; i--){
    cout << i << endl;
  }

  cout << "Creciente:" << endl;
  for(i=0; i<=numero; i++){
    cout << i << endl;
  }
  cout << endl;

  return 0;
}
