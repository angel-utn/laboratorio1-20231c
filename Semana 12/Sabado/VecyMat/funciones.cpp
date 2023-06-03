#include <iostream>
using namespace std;
#include <cstdlib>
#include "funciones.h"

/**
   Genera un número aleatorio entre 1 y limite
*/
int random(int limite){
   return (rand() % limite) + 1;
}

/**
   Inicializa un vector de enteros poniendo todos sus valores en cero.
*/
void iniciarVector(int v[], int tamanio){
   int i;
   for(i=0; i<tamanio; i++){
      v[i] = 0;
   }
}

/**
   Muestra por pantalla todos los elementos de un vector de enteros
*/
void mostrarVector(int v[], int tamanio){
   int i;
   for(i=0; i<tamanio; i++){
      cout << "#" << i+1 << ": " << v[i] << endl;
   }
}
/**
   Inicializa en cero todos los elementos de una matriz de 4x3
*/
void iniciarMatriz(float m[4][3]){
   int i, j;
   for(i=0; i<4; i++){
      for(j=0; j<3; j++){
         m[i][j] = 0;
      }
   }
}

/**
   Muestra por pantalla todos los elementos de una matriz de 4x3
*/
void mostrarMatriz(float m[4][3]){
   int i, j;
   for(i=0; i<4; i++){
      for(j=0; j<3; j++){
        cout << m[i][j] << "\t";
      }
      cout << endl;
   }
}
