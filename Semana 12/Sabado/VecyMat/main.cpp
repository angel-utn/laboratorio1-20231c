#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "funciones.h"

int main()
{
   srand(time(0));

   int vec[20], vectorcito[4];
   float mat[4][3];

   iniciarVector(vec, 20);
   mostrarVector(vec, 20);
   cout << endl;
   iniciarVector(vectorcito, 4);
   mostrarVector(vectorcito, 4);
   cout << endl;
   iniciarMatriz(mat);
   mostrarMatriz(mat);

   return 0;
}
