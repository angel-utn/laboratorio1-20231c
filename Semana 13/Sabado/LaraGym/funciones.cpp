#include <iostream>
using namespace std;

#include "funciones.h"

void cargarDatos(int tiempoEntrenamiento[], bool mTipos[][10], bool vTipos[])
{
    int entrenamiento, cliente, tipo, tiempo;

    cout << "Ingrese numero de entrenamiento: ";
    cin >> entrenamiento;

    while(entrenamiento!=0)
    {
        cout << "Ingrese el cliente: ";
        cin >> cliente;

        cout << "Ingrese tipo de entrenamiento: ";
        cin >> tipo;

        cout << "Ingrese tiempo de entrenamiento: ";
        cin >> tiempo;

        //// ponemos cosas relacionadas con los regitros
        tiempoEntrenamiento[cliente-101] += tiempo;
        mTipos[cliente-101][tipo-1] = true;
        vTipos[tipo-1] = true;

        cout << "Ingrese numero de entrenamiento: ";
        cin >> entrenamiento;
    }
}

void mostrarTiempoDeEntrenamiento(int tiempos[], int cant)
{
    for(int i=0; i<cant; i++)
    {
        int horas = tiempos[i] / 60;
        int minutos = tiempos[i] % 60;

        cout << "Cliente #"<<i+101 << endl;
        cout << "Entreno " << horas << " horas con  " << minutos << " minutos." << endl;
    }
}

void mostrarClienteTipos(bool mTipos[][10], int cant)
{
    /// recorre los clientes
    for(int i=0; i<cant; i++)
    {
        cout << "Cliente #"<<i+101<<endl;

        /// recorremos los tipos
        for(int j=0; j<10; j++)
        {
            if(mTipos[i][j])
            {
                cout << "Tipo de entrenamiento #"<<j+1 << endl;
            }
        }
    }
}

void mostrarTiposNoEntrenados(bool vTipos[], int cant){
    for(int i=0; i<cant; i++){
        if(!vTipos[i]){
            cout << i + 1 <<endl;
        }
    }
}


























