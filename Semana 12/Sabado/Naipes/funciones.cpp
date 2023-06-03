#include <iostream>
using namespace std;
#include <cstdlib>
#include <string>
#include "funciones.h"

/**
   Genera un número aleatorio entre 1 y limite
*/
int random(int limite){
   return (rand() % limite) + 1;
}

/**
   Busca un naipe a partir de su código y asignar en las variables nroNaipe y paloNaipe
   el número y palo correspondiente.
   Ver Tabla de Naipes

*/
void buscarNaipe(int codigoNaipe, int &nroNaipe, string &paloNaipe){
   if (codigoNaipe >= 1 && codigoNaipe <= 10){
      paloNaipe = "Espada";
      nroNaipe = codigoNaipe;
   }
   else if (codigoNaipe >= 11 && codigoNaipe <= 20){
      paloNaipe = "Basto";
      nroNaipe = codigoNaipe - 10;
   }
   else if (codigoNaipe >= 21 && codigoNaipe <= 30){
      paloNaipe = "Copa";
      nroNaipe = codigoNaipe - 20;
   }
   else if (codigoNaipe >= 31 && codigoNaipe <= 40){
      paloNaipe = "Oro";
      nroNaipe = codigoNaipe - 30;
   }

   if (nroNaipe >= 8){
      nroNaipe += 2;
   }
}
