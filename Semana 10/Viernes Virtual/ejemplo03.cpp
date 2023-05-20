#include <iostream>
using namespace std;

int main(){
   const int VENDEDORES = 3;
   const int ARTICULOS = 4;

   int ventas[VENDEDORES][ARTICULOS], i, j;

   for(i=0; i<VENDEDORES; i++){
      for(j=0; j<ARTICULOS; j++){
         cout << "Vendedor #" << i+1 << " Articulo #" << j+1 << endl;
         cin >> ventas[i][j];
      }
   }

   cout << endl;

   for (i=0; i<VENDEDORES; i++){
      for(j=0; j<ARTICULOS; j++){
         cout << ventas[i][j] << "\t";
      }
      cout << endl;
   }

   cout << endl;
   int totalVendedor;
   for (i=0; i<VENDEDORES; i++){
      totalVendedor = 0;
      for(j=0; j<ARTICULOS; j++){
         totalVendedor += ventas[i][j];
      }
      cout << "Vendedor # "<< i+1 << ": " << totalVendedor << endl;
   }


   return 0;
}
