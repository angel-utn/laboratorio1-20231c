/*
Igual al Problema 1 pero el programa debe poder informar también el
vuelto que debe
otorgarse al cliente, si es que debe hacerlo.
*/
#include <iostream>
using namespace std;

int main(){
  string nombreArticulo;
  float precioUnitario, importeTotal, abonaCon, vuelto;
  int cantidad;

  cout << "Nombre: ";
  cin >> nombreArticulo;

  cout << "Precio unitario: $ ";
  cin >> precioUnitario;

  cout << "Cantidad: ";
  cin >> cantidad;

  importeTotal = precioUnitario * cantidad;

  cout << endl << "Articulo vendido: " << nombreArticulo << endl;
  cout << "Importe a pagar $ " << importeTotal << endl;

  cout << endl << "Abona con: $ ";
  cin >> abonaCon;

  vuelto = abonaCon - importeTotal;
  if (vuelto >= 0){
    cout << "Vuelto $ " << vuelto;
  }
  else{
    cout << "Falta $ " << vuelto*-1;
  }

  return 0;
}
