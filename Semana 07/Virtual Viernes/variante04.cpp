#include <iostream>
using namespace std;
#include <iomanip>

int main(){
   int i, j, codAnterior;
   int cod, mes, cantPasajes;
   float totalRec;

   /// A
   int totalPasajesVendidos = 0;
   /// B
   float totalRecaudadoxDestino;

   cout << "DESTINO: ";
   cin >> cod;

   while (cod != 0){

      codAnterior = cod;
      totalRecaudadoxDestino = 0;

      while(cod == codAnterior){
         cout << "MES: ";
         cin >> mes;
         cout << "CANT PASAJES: ";
         cin >> cantPasajes;
         cout << "TOTAL RECAUDADO: ";
         cin >> totalRec;
         cout << endl;

         totalPasajesVendidos += cantPasajes;
         totalRecaudadoxDestino += totalRec;

         cout << "DESTINO: ";
         cin >> cod;
      }

      cout << endl << "B) TOTAL RECAUDADO DEL DESTINO #" << codAnterior << ": $" << fixed << setprecision(2) << totalRecaudadoxDestino << endl;

   }

   cout << endl << "A) TOTAL PASAJES: " << totalPasajesVendidos << endl;


   return 0;
}
