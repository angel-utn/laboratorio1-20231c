#include <iostream>
using namespace std;
#include <iomanip>

int main(){
   const int DESTINOS = 3;

   int i, j;
   int cod, mes, cantPasajes;
   float totalRec;

   /// A
   int totalPasajesVendidos = 0;
   /// B
   float totalRecaudadoxDestino;

   for(i=1; i<= DESTINOS; i++){

      totalRecaudadoxDestino = 0;

      cout << "DESTINO: ";
      cin >> cod;
      cout << "MES: ";
      cin >> mes;

      while(mes != 0){
         cout << "CANT PASAJES: ";
         cin >> cantPasajes;
         cout << "TOTAL RECAUDADO: ";
         cin >> totalRec;
         cout << endl;

         totalPasajesVendidos += cantPasajes;
         totalRecaudadoxDestino += totalRec;

         cout << "DESTINO: ";
         cin >> cod;
         cout << "MES: ";
         cin >> mes;
      }

      cout << endl << "B) TOTAL RECAUDADO DEL DESTINO: $" << fixed << setprecision(2) << totalRecaudadoxDestino << endl;
   }

   cout << endl << "A) TOTAL PASAJES: " << totalPasajesVendidos << endl;

   return 0;
}
