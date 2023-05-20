/*
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego
de cargar todas las notas:
   - Listar cuántos estudiantes obtuvieron una nota mayor al promedio.
   - Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo,
   se ingresa 10 para mostrar el décimo examen.
   - Obtener la mejor calificación y cuántos estudiantes lograron dicha
   calificación.
*/
#include <iostream>
using namespace std;

int main(){
   const int CANT_EXAMENES = 10;
   float notas[CANT_EXAMENES]={};
   int i;

   // A
   float promedio, sumaNotas = 0;
   int cantidadNotasMayoresAlPromedio = 0;

   // B
   int nroExamenAVisualizar;

   // C
   float maximaNota;
   int cantidadNotasIgualesAlMaximo = 0;


   for (i=0; i<CANT_EXAMENES; i++){
      cout << "Nota #" << i+1 << ": ";
      cin >> notas[i];
   }
   // A
   // Sumamos cada nota ingresada previamente en sumaNotas
   for(i=0; i<CANT_EXAMENES; i++){
      sumaNotas += notas[i];
   }
   promedio = sumaNotas/CANT_EXAMENES;

   // Comparamos cada nota con el promedio y contamos si es mayor la nota al promedio
   for(i=0; i<CANT_EXAMENES; i++){
      if (notas[i] > promedio){
         cantidadNotasMayoresAlPromedio++;
      }
   }

   cout << endl << "Punto A) " << cantidadNotasMayoresAlPromedio << endl;

   cout << "Punto B) Ingresar nro de examen a visualizar: ";
   cin >> nroExamenAVisualizar;

   if (nroExamenAVisualizar >= 1 && nroExamenAVisualizar <= CANT_EXAMENES){
      cout << "Nro del examen solicitado: " << notas[nroExamenAVisualizar - 1];
   }
   else{
      cout << "No existe tal examen" << endl;
   }

   // C
   maximaNota = notas[0];
   for(i=1; i<CANT_EXAMENES; i++){
      if (notas[i] > maximaNota){
         maximaNota = notas[i];
      }
   }
   for(i=0; i<CANT_EXAMENES; i++){
      if (notas[i] == maximaNota){
         cantidadNotasIgualesAlMaximo++;
      }
   }

   cout << endl << "Punto C) " << cantidadNotasIgualesAlMaximo << endl;

   return 0;
}
