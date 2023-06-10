#include <iostream>
#include "funciones.h"

using namespace std;

void mostrarMenu()
{
    cout << "MENU" << endl;
    cout << "----" << endl;
    cout << "0-CARGAR DATOS" << endl;
    cout << "1-PUNTO A" << endl;
    cout << "2-PUNTO B" << endl;
    cout << "3-PUNTO C" << endl;
    cout << "9-SALIR" << endl;
    cout << endl << "SELECCIONE UNA OPCION: ";
}

void cargarDatos(int mat[][10])
{
    system("cls");
    //cout << "CARGAR DATOS" << endl;

    int nroEntrenamiento, cliente, tipo, minutos;

    cout << "Numero de entrenamiento: ";
    cin >> nroEntrenamiento;

    while(nroEntrenamiento != 0)
    {
        cout << "Cliente: ";
        cin >> cliente;
        cout << "Tipo de entrenamiento: ";
        cin >> tipo;
        cout << "Tiempo del entrenamiento: ";
        cin >> minutos;

        //calculos
        /*  APROVECHO QUE LOS NÚMEROS DE CLIENTE Y TIPO DE ENTRENAMIENTO SON CONSECUTIVOS
        (AUNQUE NO COMIENCEN DESDE 0, NO IMPORTA)
        Y CREO UNA MATRIZ QUE ME SERVIRÁ PARA RESOLVER TODOS LOS PUNTOS
        EN UNA DIMENSIÓN LOS CLIENTES, EN LA OTRA LOS TIPOS DE ENTRENAMIENTO
        Y EN LA INTERSECCIÓN DE AMBAS ("CELDAS") GUARDO LOS MINUTOS ENTRENADOS  */
        mat[cliente - 101][tipo - 1] += minutos;

        cout << "Numero de entrenamiento: ";
        cin >> nroEntrenamiento;
    }

    system("pause");
    system("cls");
}

void puntoA(int mat[][10], int clientes, int tipos)
{
    system("cls");
    //cout << "PUNTO A" << endl;

    int c, t;
    int minutosTotales;
    int horas = 0, mins = 0;

    for(c=0; c<clientes; c++)   //RECORRO CLIENTES
    {
        minutosTotales = 0;

        for(t=0; t<tipos; t++)    //RECORRO TIPOS DE ENTRENAMIENTO
        {
            minutosTotales += mat[c][t];
        }

        if(minutosTotales > 0)
        {

            cout << "Cliente: " << c + 101 << endl;
            //cout << "Minutos de entrenamiento: " << minutosTotales << endl;
            convertirMinutos(minutosTotales, horas, mins);

            if(horas > 0 && mins > 0)
            {
                cout << "Entreno " << horas << " hora/s y " << mins << " minuto/s" << endl;
            }
            else if(horas > 0)
            {
                cout << "Entreno " << horas << " hora/s" << endl;
            }
            else
            {
                cout << "Entreno " << mins << " minuto/s" << endl;
            }
        }
    }

    system("pause");
    system("cls");
}

void puntoB(int mat[][10], int clientes, int tipos)
{
    system("cls");
    //cout << "PUNTO B" << endl;

    int c, t, minutosTotales;
    bool mostroCartel;

    for(c=0; c<clientes; c++)   //RECORRO CLIENTES
    {
        minutosTotales = 0;
        mostroCartel = false;

        for(t=0; t<tipos; t++)    //RECORRO TIPOS DE ENTRENAMIENTO
        {
            minutosTotales += mat[c][t];
            if(minutosTotales > 0 && !mostroCartel)
            {
                cout << endl;
                cout << "Cliente: " << c + 101 << " entreno los siguientes tipos: " << endl;
                mostroCartel = true;
            }
            if(mat[c][t] > 0)
            {
                cout << t + 1 << "\t";
            }
        }
    }
    cout << endl;

    system("pause");
    system("cls");
}

void puntoC(int mat[][10], int clientes, int tipos)
{
    system("cls");
    //cout << "PUNTO C" << endl;

    int t, c;
    int minutosPorTipo;
    cout << "Los tipos de entrenamiento que no se realizaron por ningun cliente son: " << endl;

    for(t=0; t<tipos; t++)    //RECORRO TIPOS DE ENTRENAMIENTO
    {
        minutosPorTipo = 0;
        for(c=0; c<clientes; c++)   //RECORRO CLIENTES
        {
            minutosPorTipo += mat[c][t];
        }
        if(minutosPorTipo == 0){
              cout << t + 1 << "\t";
        }
    }
    cout << endl;

    system("pause");
    system("cls");
}

void convertirMinutos(int minutosTotales, int &horas, int &mins)
{
    horas = minutosTotales / 60;
    mins = minutosTotales % 60;
}
