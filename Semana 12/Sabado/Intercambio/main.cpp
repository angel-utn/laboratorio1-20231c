#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   int y, z;
   y = 1000;
   z = 1;

   cout << "Antes de llamar a intercambiar" << endl;
   cout << "Y: " << y << endl;
   cout << "Z: " << z << endl;
   intercambiar(y, z);
   cout << "Luego de llamar a intercambiar" << endl;
   cout << "Y: " << y << endl;
   cout << "Z: " << z << endl;


   return 0;
}
