/*
 Ingresar un numero entero. Determinar e informar si el numero es:
 Positivo, Negativo o Cero.
*/
#include <iostream>
using namespace std;

int main(){
  int nro;

  cout << "Ingresar numero: ";
  cin >> nro;

  if (nro > 0){
    cout << "Positivo" << endl;
  }

  if (nro == 0){
    cout << "Es cero" << endl;
  }

  if (nro < 0){
    cout << "Negativo" << endl;
  }


  return 0;
}
