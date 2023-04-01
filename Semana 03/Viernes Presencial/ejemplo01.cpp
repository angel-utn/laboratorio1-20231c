/*
  Hacer un programa que permite el ingreso de dos números enteros por
  teclado. Calcular e informar la suma de ambos.
*/

#include <iostream>
using namespace std;

int main(){
  int n1, n2, resultadoSuma;
  cout << "Ingresar dos numeros enteros: ";
  cout << endl;
  cin >> n1;
  cin >> n2;
  resultadoSuma = n2 + n1;
  cout << endl << "El resultado de la suma es : " << resultadoSuma;

  return 0;
}
