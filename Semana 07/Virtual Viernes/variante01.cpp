#include <iostream>
using namespace std;

int main(){
   const int DESTINOS = 3;
   const int MESES = 4;

   int i, j;
   int cod, mes, cantPasajes;
   float totalRec;

   /// A
   int totalPasajesVendidos = 0;
   /// B
   float totalRecaudadoxDestino;

   for(i=1; i<= DESTINOS; i++){

      totalRecaudadoxDestino = 0;

      for(j=1; j<=MESES; j++){
         cout << "DESTINO: ";
         cin >> cod;
         cout << "MES: ";
         cin >> mes;
         cout << "CANT PASAJES: ";
         cin >> cantPasajes;
         cout << "TOTAL RECAUDADO: ";
         cin >> totalRec;
         cout << endl;

         totalPasajesVendidos += cantPasajes;
         totalRecaudadoxDestino += totalRec;
      }
      cout << endl << "B) TOTAL RECAUDADO DEL DESTINO: $" << totalRecaudadoxDestino << endl;
   }

   cout << endl << "A) TOTAL PASAJES: " << totalPasajesVendidos << endl;

   return 0;
}
