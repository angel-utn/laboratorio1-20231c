#include <iostream>
using namespace std;

int main(){
   string meses[12] = {"Enero","Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
   float ahorro[12] = {};
   int i;

   for(i=0; i<12; i++){
      cout << "Ingresar ahorro del mes #" << i+1 << " : $";
      cin >> ahorro[i];
   }
   cout << "----------------------------" << endl;
   for(i=0; i<12; i++){
      cout << meses[i] << ": $" << ahorro[i] << endl;
   }
   cout << "----------------------------" << endl;
   float totalPrimerSemestre=0, totalSegundoSemestre=0;

   for(i=0; i<12; i++){
      if (i < 6){
         totalPrimerSemestre += ahorro[i];
      }
      else{
         totalSegundoSemestre += ahorro[i];
      }
   }
   cout << "Semestre #1: $" << totalPrimerSemestre << endl;
   cout << "Semestre #2: $" << totalSegundoSemestre << endl;
   cout << "----------------------------" << endl;
   float totalAhorroSemestral[2] = {};
   for(i=0; i<12; i++){
      int mes = i;
      int semestre = mes / 6;
      totalAhorroSemestral[semestre] += ahorro[i];
   }

   for(i=0; i<2; i++){
      cout << "Semestre #" << i+1 << ": $" << totalAhorroSemestral[i] << endl;
   }

   return 0;
}
