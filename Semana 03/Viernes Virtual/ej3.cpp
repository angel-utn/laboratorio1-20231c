/* PROBLEMA 1
Un comercio solicita hacer un programa que permita ingresar el nombre de un
artículo, su precio unitario y la cantidad de unidades vendidas (entero) y
calcular e informar el nombre del artículo y el importe total de la venta que
deberá pagar el cliente.
*/

#include <iostream>

using namespace std;

int main()
{
  string nombre;
  float pu;
  int cant;
  float total;

  cout << "Ingrese nombre del articulo: ";
  cin >> nombre;
  cout << "Ingrese precio: ";
  cin >> pu;
  cout << "Ingrese cantidad: ";
  cin >> cant;

  cout << "Nombre del articulo: " << nombre << endl;

  total = pu * cant;

  cout << "Debe abonar: $" << total << endl;
  //cout << "Debe abonar: $" << pu * cant << endl; // SIN USAR total

  /*
  cout << "Precio unitario: " << pu << endl;
  cout << "Cantidad: " << cant << endl;
  */

	return 0;
}
