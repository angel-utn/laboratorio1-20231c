#include <iostream>
using namespace std;
#include "funciones.h"

void cargarDatos(int fosilesyExpediciones[6][2], int fosilesxPaleontologo[], int &cantidadExpedicionesCba, float &costoTotalExpedicionesCba){

   int legajo, dias, provincia, animales, vegetales;
   float costo;

   cout << "Legajo: ";
   cin >> legajo;

   while(legajo != 0){
      cout << "Dias: ";
      cin >> dias;
      cout << "Provincia: ";
      cin >> provincia;
      cout << "Fosiles animales: ";
      cin >> animales;
      cout << "Fosiles vegetales: ";
      cin >> vegetales;
      cout << "Costo: $";
      cin >> costo;

      /// Punto A
      fosilesyExpediciones[provincia-1][0] += animales;
      fosilesyExpediciones[provincia-1][1]++;

      /// Punto B
      fosilesxPaleontologo[legajo-1000] += animales+vegetales;

      /// Punto C
      if (provincia == 4){
         cantidadExpedicionesCba++;
         costoTotalExpedicionesCba+= costo;
      }

      cout << "Legajo: ";
      cin >> legajo;
   }

}
void puntoA(int fosilesyExpediciones[6][2]){

   string provincias[6] = {"Río Negro","Chubut","Santa Cruz","Córdoba","Tierra del Fuego","Buenos Aires"};

   cout << "A) Provincias con expediciones y sin fosiles animales" << endl;
   int i;
   for(i=0; i<6; i++){
      if (fosilesyExpediciones[i][0] == 0 && fosilesyExpediciones[i][1] > 0){
         cout << provincias[i] << endl;
      }
   }
   cout << endl;
}
void puntoB(int fosilesxPaleontologo[]){
   int i;
   /*int maximoLegajo;
   int maximaCantidad = 0;

   for(i=0; i<500; i++){
      if (fosilesxPaleontologo[i] > maximaCantidad){
         maximaCantidad = fosilesxPaleontologo[i];
         maximoLegajo = i + 1000;
      }
   }
   cout << "B) El paleontologo/a con mas fosiles encontrados es: " << maximoLegajo << endl;
   */

   int posMax = 0;
   for(i=1; i<500; i++){
      if (fosilesxPaleontologo[i] > fosilesxPaleontologo[posMax]){
         posMax = i;
      }
   }

   cout << "B) El paleontologo/a con mas fosiles encontrados es: " << posMax+1000 << endl;

}
void puntoC(int cantidadExpedicionesCba, float costoTotalExpedicionesCba){
   if (cantidadExpedicionesCba == 0){
      cout << "C) No hubo expediciones en Córdoba" << endl;
   }
   else{
      float promedio;
      promedio = costoTotalExpedicionesCba / cantidadExpedicionesCba;
      cout << "C) Promedio de costo de expediciones en Córdoba:$ " << promedio << endl;
   }
}
