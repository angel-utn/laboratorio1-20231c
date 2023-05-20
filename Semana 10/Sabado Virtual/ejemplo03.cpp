#include <iostream>
using namespace std;

int main(){
   const int DIAS = 7;
   const int MATERIAS = 3;
   int horasEstudio[DIAS][MATERIAS] = {}, i, j;
   int totalHoras;

   for(i = 0; i < DIAS; i++){
      for (j = 0; j < MATERIAS; j++){
         cout << "Cantidad de horas en el dia #" << i+1 << " para materia #" << j+1 << ": ";
         cin >> horasEstudio[i][j];
      }
   }

   cout << endl << endl;

   for(i = 0; i < DIAS; i++){
      for (j = 0; j < MATERIAS; j++){
            cout << horasEstudio[i][j] << "\t";
      }
      cout << endl;
   }

   /// Cantidad de horas totales por materia
   for(i = 0; i < MATERIAS; i++){
      cout << "MATERIA #" << i+1 << endl;
      totalHoras = 0;
      for(j=0; j<DIAS; j++){
         totalHoras+= horasEstudio[j][i];
      }
      cout << "TOTAL HS: " << totalHoras << endl << endl;
   }


   return 0;
}
