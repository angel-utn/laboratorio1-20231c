/* PROBLEMA 3
Un comercio solicita hacer un programa que permita ingresar el nombre de un
artículo, su precio unitario y la cantidad de unidades vendidas (entero) y
calcular e informar el nombre del artículo y el importe total de la venta que
deberá pagar el cliente.
El programa debe poder informar también el vuelto que debe otorgarse al cliente, si es que debe hacerlo

El programa debe poder calcular e informar una serie de descuentos y recargos que dependen de la Forma de
Pago
E → Efectivo       Aplica un 15% de descuento al total de la compra
Q → QR             Aplica un 5% de descuento al total de la compra
T → Tarjeta        Aplica un 10% de recargo al total de la compra

La salida por pantalla debe mostrar el nombre del artículo, el subtotal de la compra, la forma de pago y
el total de la compra (incluyendo el descuento o recargo aplicado si corresponde).
*/

#include <iostream>

using namespace std;

int main()
{
    const float EF = 0.85, QR = 0.95, T = 1.1; //EF, QR Y T SON CONSTANTES SIMBÓLICAS (SE REPRESENTAN CON UN NOMBRE)
    string nombre, fpago;
    float pu, subtotal, total;
    int cant;
    char fp;

    cout << "Ingrese nombre del articulo: ";
    cin >> nombre;
    cout << "Ingrese precio: ";
    cin >> pu;
    cout << "Ingrese cantidad: ";
    cin >> cant;
    cout << "Ingrese forma de pago: ";
    cin >> fp;

    cout << endl;
    cout << "Nombre del articulo: " << nombre << endl;

    subtotal = pu * cant;

    cout << "Subtotal: $" << subtotal << endl;

    switch(fp)
    {
      case 'E':
      case 'e':
        total = subtotal * EF;
        fpago = "Efectivo";
        break;
      case 'Q':
      case 'q':
        total = subtotal * QR;
        fpago = "QR";
        break;
      case 'T':
      case 't':
        total = subtotal * T;
        fpago = "Tarjeta";
        break;
    }

    /* VARIANTE: USANDO CONSTANTES LITERALES
    switch(fp)
    {
      case 'E':
      case 'e':
        total = subtotal * 0.85f; //con la "f" le indico que es float y no double, es decir la precisión
        fpago = "Efectivo";
        break;
      case 'Q':
      case 'q':
        total = subtotal * 0.95f; //con la "f" le indico que es float y no double, es decir la precisión
        fpago = "QR";
        break;
      case 'T':
      case 't':
        total = subtotal * 1.1f; //con la "f" le indico que es float y no double, es decir la precisión
        fpago = "Tarjeta";
        break;
    }
    */

    //cout << "Forma de pago: " << fp << endl;
    cout << "Forma de pago: " << fpago << endl;
    cout << "Total: " << total << endl;

    return 0;
}
