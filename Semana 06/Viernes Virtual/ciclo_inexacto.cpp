/*
   El famoso influencer Santi Laratea decidió hacer una colecta de dinero para pagar la deuda de
   550000 de una institución. Para ello le pidió a sus seguidores que donen el dinero que les
   sea posible. Utilizó un sistema que aceptaba donaciones hasta que se cubriera el monto de la deuda.

   Hacer un programa que emule dicho sistema. El programa debe indicar la cantidad de donaciones
   que se registraron.

*/
#include <iostream>
using namespace std;

int main(){
   /// Datos de entrada (qué tipo y cuántos?)
   /// float montoDonacion
   /// Cuántos ingresos? Indeterminado

   /// Info de salida
   /// Cuántas donaciones se hicieron (se muestra una vez al final de cargar todas las donaciones)
   /// int cantidadDonaciones

   const float OBJETIVO = 550000;
   float montoDonacion, recaudacion = 0;
   int cantidadDonaciones = 0;

   while (recaudacion < OBJETIVO){
      cout << "Importe de donacion: $";
      cin >> montoDonacion;

      cantidadDonaciones++;
      recaudacion += montoDonacion;
   }

   cout << endl << "Cantidad de donaciones necesarias: " << cantidadDonaciones << endl;

   return 0;
}
