/* PROBLEMA 2
Un comercio solicita hacer un programa que permita ingresar el nombre de un
artículo, su precio unitario y la cantidad de unidades vendidas (entero) y
calcular e informar el nombre del artículo y el importe total de la venta que
deberá pagar el cliente.
El programa debe poder informar también el vuelto que debe otorgarse al cliente, si es que debe hacerlo
*/

#include <iostream>

using namespace std;

int main()
{
    string nombre;
    float pu, total, vuelto;
    int cant, billete;

    cout << "Ingrese nombre del articulo: ";
    cin >> nombre;
    cout << "Ingrese precio: ";
    cin >> pu;
    cout << "Ingrese cantidad: ";
    cin >> cant;
    cout << "Ingrese con cuanto abona: $";
    cin >> billete;

    cout << endl;
    cout << "Nombre del articulo: " << nombre << endl;

    total = pu * cant;

    cout << "Debe abonar: $" << total << endl;

    vuelto =  billete - total;

    if(vuelto >= 0)
    {
        cout << "Su vuelto es: $" << vuelto << endl;
    }
    else
    {
        cout << "No te alcanza. Vuelva prontos." << endl;
    }

    /*VARIANTE (SI NO QUIERO INFORMAR UN VUELTO 0)
    if(vuelto > 0)
    {
        cout << "Su vuelto es: $" << vuelto << endl;
    }
    else
    {
        if(vuelto == 0)
        {
            cout << "Pago exacto" << endl;
        }
        else
        {
            cout << "No te alcanza. Vuelva prontos." << endl;
        }
    }*/

    /* SI NO LE ALCANZA Y QUISIERA CALCULAR CUÁNTO FALTA, TENDRÍA QUE AGREGAR ESTO EN EL ÚLTIMO ELSE
      float falta;

      falta = total - billete;

      o

      falta = vuelto * (-1);
    */

    cout << endl << "Gracias por comprar" << endl;

    /*
    cout << "Precio unitario: " << pu << endl;
    cout << "Cantidad: " << cant << endl;
    */

    return 0;
}
