/*
Problema 1
Se desea un programa que permita ingresar una cantidad de horas por teclado. Luego, a
partir de las horas ingresadas el sistema debe mostrar por pantalla:
- Una D por cada día que se pueda expresar con dicha cantidad de horas.
- Una M por cada mes (grupo de 30 días) que se pueda expresar con dicha cantidad
de horas.
- Una A por cada año (grupo de 365 días) que se pueda expresar con dicha cantidad
de horas.
Por ejemplo, si se ingresa 1584 horas el sistema debe indicar:

DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD


MM


AA

*/

#include <iostream>

using namespace std;

int main(void)
{
    // DATOS DE ENTRADA

    int i, cantidadHoras;

    cout << "Ingrese horas: ";
    cin >> cantidadHoras;

    int dias = cantidadHoras/24;//24
    int meses = dias/30;        //720
    int anios = meses/12;       // 8760

    cout << endl;

    // PROCESOS

    for(i = 1; i <= dias; i++){
        // SALIDAS PANTALLA
        cout << 'D';
    }

    cout << endl;

    for(i = 1; i <= meses; i++){
        // SALIDAS PANTALLA
        cout << 'M';
    }

    cout << endl;

    for(i = 1; i <= anios; i++){
        // SALIDAS PANTALLA
        cout << 'A';
    }

    return 0;
}
