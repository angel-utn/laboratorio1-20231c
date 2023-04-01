/*

*/
#include <iostream>
using namespace std;

int main(){
  int nro;
  cout << "Ingresar numero: ";
  cin >> nro;

  if (nro >= 1 && nro <= 10){
    cout << "El numero esta entre el 1 y el 10"  ;
  }
  else{
    cout << "El numero NO esta entre el 1 y el 10";
  }


  return 0;
}
