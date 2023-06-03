/*
Crear una función que reciba un vector de números enteros (6 elementos) , su tamaño, y un número entero
Y retorne True si el número dado se encuentra dentro del vector
O retorne False si no se encuentra
Mostrar el resultado de la búsqueda

Alternativa:
la función ahora debe devolver la posición del vector en la que encontró el número
*/

#include <iostream>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    const int TAM = 6;
    int vec[TAM];
    int numero;
    int posicion;
    int mat[TAM][TAM];

    //semilla o seed
    srand(time(0));

    pedirNumero(numero);
    //cout << numero << endl;

    cargarVector(vec, TAM);

    mostrarVector(vec, TAM);
    cout << endl;

    if(buscarElementoEnVector(vec, TAM, numero) == true)
    {
        cout << "El elemento existe en el vector " << endl;
    }
    else
    {
        cout << "No se ha encontrado el elemento en el vector " << endl;
    }
    //cout << buscarElementoEnVector(vec, TAM, numero) << endl;

    posicion = buscarPosicionEnVector(vec, TAM, numero);

    if(posicion == -1)
    {
        cout << "No se ha encontrado el elemento en el vector " << endl;
    }
    else
    {
        cout << "La posicion del elemento en el vector es: ";
        cout << posicion << endl;
    }

    ponerEnCeroMatriz(mat, TAM);
    mostrarMatriz(mat, TAM);

    return 0;
}
