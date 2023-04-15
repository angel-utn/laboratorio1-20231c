#include <iostream>

using namespace std;
/**
Problema 1
Se desea un programa que permita ingresar una cantidad de horas por teclado.
Luego, a partir de las horas ingresadas el sistema debe mostrar por pantalla:
Una D por cada día que se pueda expresar con dicha cantidad de horas.
Una M por cada mes (grupo de 30 días) que se pueda expresar con dicha cantidad de horas.
Una A por cada año (grupo de 365 días) que se pueda expresar con dicha cantidad de horas.

Por ejemplo, si se ingresa 1584 horas el sistema debe indicar:
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
MM
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
Datos de entrada:
    horas

Datos de salida:
    cantidad D
    cantidad M
    cantidad A

Operaciones
    cantidad D = horas / 24
    cantidad M = horas / 720  | dias / 30
    cantidad A = horas / 8760 | dias / 365

8784 horas:

366 D
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
12 M
MMMMMMMMMMMM
1 AA

*/
int main()
{
    int horas;
    int cantidadD, cantidadM, cantidadA;

    const int HORAS_EN_DIA = 24;

    cout << "Horas: ";
    cin >> horas;

    cantidadD = horas / HORAS_EN_DIA;
    cantidadM = horas / 720;
    cantidadA = horas / 8760;

    for (int i = 0; i < cantidadD; i++)
    {
        cout << "D";
    }
    cout << endl;
    for (int i = 0; i < cantidadM; i++)
    {
        cout << "M";
    }
    cout << endl;
    for (int i = 0; i < cantidadA; i++)
    {
        cout << "A";
    }
    cout << endl;

    return 0;
}
