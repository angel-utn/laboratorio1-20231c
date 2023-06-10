#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int opcion;
    int mat[50][10] = {};
    const int CLIENTES = 50;
    const int TIPOS = 10;

    do
    {
        mostrarMenu();
        cin >> opcion;

        switch(opcion)
        {
        case 0:
            //cargar datos
            cargarDatos(mat);
            break;
        case 1:
            //punto A
            puntoA(mat, CLIENTES, TIPOS);
            break;
        case 2:
            //punto B
            puntoB(mat, CLIENTES, TIPOS);
            break;
        case 3:
            //punto C
            puntoC(mat, CLIENTES, TIPOS);
            break;
        case 9:
            break;
        default:
            cout << "OPCION INCORRECTA" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
    while(opcion != 9);

    return 0;
}
