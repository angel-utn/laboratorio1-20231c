/**
Una matriz es Messistica si es una matriz de enteros de 10x10, en todas sus filas hay
por lo menos un elemento con el valor 10 y la suma de todos los elementos de al menos
una fila da como resultado el valor 10.
Hacer una función llamada EsMessistica que reciba una matriz de 10x10 y devuelva true
si la matriz recibida es Messistica o false si no lo es.

NOTA: No deben entregar la función main para este problema. La función EsMessistica
sólo debe calcular la condición de la matriz, no debe solicitar al usuario ningún
dato ni mostrar por pantalla ninguna información.

*/

#include <iostream>
using namespace std;

bool EsMessistica(int matriz[10][10]);
bool EsMessisticaAlternativa(int matriz[10][10]);
int SumarFila(int matriz[10][10], int fila);
bool HayElementoConValor10EnMatriz(int matriz[10][10], int fila);

int main(){

   int mat[10][10] = {
                     10,0,10,0,10,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     9,1,0,0,0,0,0,10,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0,
                     10,0,0,0,0,0,0,0,0,0};

   bool resultado;

   resultado = EsMessisticaAlternativa(mat);

   cout << resultado << endl;


   return 0;
}

bool HayElementoConValor10EnMatriz(int matriz[10][10], int fila){
   int i;
   for(i=0; i<10; i++){
      if (matriz[fila][i] == 10){
         return true;
      }
   }
   return false;
}

int SumarFila(int matriz[10][10], int fila){
   int i, acumulacion = 0;
   for(i=0; i<10; i++){
      acumulacion += matriz[fila][i];
   }
   return acumulacion;
}

bool EsMessisticaAlternativa(int matriz[10][10]){
   int f, c;
   bool hayElementoConValor10;
   int acumulacionFila;
   bool hayFilaQueAcumula10 = false;

   for(f=0; f<10; f++){
      hayElementoConValor10 = HayElementoConValor10EnMatriz(matriz, f);
      acumulacionFila = SumarFila(matriz, f);

      if (hayElementoConValor10 == false){
         return false;
      }
      if (acumulacionFila == 10){
         hayFilaQueAcumula10 = true;
      }
   }

   return hayFilaQueAcumula10;

}

bool EsMessistica(int matriz[10][10]){
   int f, c;
   int cantidadFilasConValor10 = 0;
   int acumulacionFila;
   bool hayElementoConValor10;
   bool hayFilaQueAcumula10 = false;

   for(f=0; f<10; f++){
      hayElementoConValor10 = false;
      acumulacionFila = 0;

      for(c=0; c<10; c++){
         acumulacionFila += matriz[f][c];
         if(matriz[f][c] == 10){
            hayElementoConValor10 = true;
         }
      }
      // Si hubo un elemento individual con valor 10
      if (hayElementoConValor10 == true){
         cantidadFilasConValor10++;
      }
      else{
         return false;
      }
      // Si hubo una fila con valor 10
      if (acumulacionFila == 10){
         hayFilaQueAcumula10 = true;
      }
   }

   if (hayFilaQueAcumula10 == true && cantidadFilasConValor10 == 10){
      return true;
   }
   else{
      return false;
   }
}

