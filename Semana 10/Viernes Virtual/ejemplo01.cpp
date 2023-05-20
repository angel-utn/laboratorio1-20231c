/**
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego
de cargar todas las notas:
- Listar cuántos estudiantes obtuvieron una nota mayor al promedio.
- Pedir un número y mostrar por pantalla la nota registrada correspondiente a ese estudiante.
Por ejemplo, se ingresa 10 para mostrar el décimo examen.
-  Obtener la mejor calificación y cuántos estudiantes lograron dicha calificación
*/

#include <iostream>
using namespace std;

int main(){
   string nombres[7] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
   // int horasEntrenamiento[7] = {2, 0, 5, 6, 0, 4, 4};
   int horasEntrenamiento[7];
   int nroDia;

   int i;
   for(i=0; i<7; i++){
      cout << "Ingresar la cantidad de horas entrenadas del dia " << nombres[i] << ": ";
      cin >> horasEntrenamiento[i];
   }
   cout << endl;
   for(i=0; i<7; i++){
      cout << nombres[i] << ": " << horasEntrenamiento[i] << endl;
   }

   cout << endl;
   cout << "Ingrese el número de día (1-7) para ver las horas entrenadas: ";
   cin >> nroDia;
   cout << "Nombre del dia: " << nombres[nroDia - 1] << endl;
   cout << "Cantidad hs   : " << horasEntrenamiento[nroDia - 1] << endl;

   return 0;
}
