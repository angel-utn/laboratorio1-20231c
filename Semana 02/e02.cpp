/*
  Ingresar por teclado el nombre de un artículo, el precio unitario y la
  cantidad de unidades vendidas. Calcular e informar el importe de la venta y el
  artículo vendido.
  Además, se debe ingresar con cuanto abona y calcular el vuelto.
*/
#include <iostream>
using namespace std;

int main(){
  string nombreArticulo;
  float precioUnitario, importe, abonaCon, vuelto;
  int cantidad;

  cout << "Nombre del articulo: ";
  cin >> nombreArticulo;

  cout << "Precio unitario: $ ";
  cin >> precioUnitario;

  cout << "Cantidad de unidades: ";
  cin >> cantidad;

  cout << "Abona con: $ ";
  cin >> abonaCon;

  importe = cantidad * precioUnitario;

  cout << endl;
  cout << "Articulo: " << nombreArticulo << endl;
  cout << "Importe: $ " << importe << endl;

  if (abonaCon >= importe){
    vuelto = abonaCon - importe;
    cout << "Vuelto : $ " << vuelto << endl;
  }
  else{
    cout << "Te falta platita." << endl;
  }


  return 0;
}
