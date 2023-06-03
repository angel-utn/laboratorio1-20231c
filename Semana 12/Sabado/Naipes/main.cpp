/**
   Hacer un programa que reciba un código de naipe (del 1 al 40) y
determine el número y el palo de la baraja española de 40 cartas.
Tener en cuenta que:
- Los naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21
al 30 y oro del 31 al 40.
- Los naipes con número 8 y 9 no existen

*/

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "funciones.h"

int main()
{
   srand(time(0));
   int codigoNaipe;
   int nroNaipe, i;
   string paloNaipe;

   for(i=1; i<=3; i++){
      codigoNaipe = random(40);
      buscarNaipe(codigoNaipe, nroNaipe, paloNaipe);
      cout << nroNaipe << " de " << paloNaipe << endl;
   }

   return 0;
}
