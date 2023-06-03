#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void pedirNumero(int &num);
void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);
bool buscarElementoEnVector(int vec[], int tam, int num);
int buscarPosicionEnVector(int vec[], int tam, int num);
void ponerEnCeroMatriz(int mat[][6], int tam);
void mostrarMatriz(int mat[][6], int tam);

#endif // FUNCIONES_H_INCLUDED
