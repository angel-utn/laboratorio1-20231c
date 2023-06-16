#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   // A
   int fosilesyExpediciones[6][2] = {};

   // B
   int fosilesxPaleontologo[500] = {};

   // C
   int cantidadExpedicionesCba = 0;
   float costoTotalExpedicionesCba = 0;


   cargarDatos(fosilesyExpediciones, fosilesxPaleontologo, cantidadExpedicionesCba, costoTotalExpedicionesCba);
   puntoA(fosilesyExpediciones);
   puntoB(fosilesxPaleontologo);
   puntoC(cantidadExpedicionesCba, costoTotalExpedicionesCba);

   return 0;
}
