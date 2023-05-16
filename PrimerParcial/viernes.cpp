#include <iostream>
using namespace std;
/**
- Legajo del enfermero/a (entero entre 1000 y 15000)
- Número de turno (entero)
- Horario ('M' - Mañana, 'T' - Tarde, 'N' - Noche)
- Cantidad de horas trabajadas en el turno (entero mayor a cero

*/
int main() {
	int legajo, turno, horas;
   char horario;
   
   /// Punto A
   int pa_suma, pa_cantidad;
   
   /// PUNTO B
   int pb_horasExtras;
   
   pb_horasExtras = 0;
   
   /// PUNTO C
   int pc_cantidad;
   bool pc_trabajoM, pc_trabjoT, pc_trabajoN;
   
   pc_cantidad = 0;
   
   /// PUNTO D
   int pd_cantidadManiana, pd_cantidadTarde, pd_cantidadNoche;
   
   pd_cantidadManiana = pd_cantidadTarde = pd_cantidadNoche = 0;
   
   // inicializo cosas del total
   
   
   cout << "Ingrese legajo:";
   cin >> legajo;
   
   while(legajo >= 0){
      
      ///inicializo cosas del grupo (Enfermero)
      pa_suma = pa_cantidad = 0;
      
      pc_trabajoM = pc_trabajoN = pc_trabjoT = false;
      
      cout << "Ingrese numero de turno:";
      cin >> turno;
      
      while(turno != 0){
         cout << "Ingrese Horario:";
         cin >> horario;
         
         cout << "Ingrese cantidad de horas:";
         cin >> horas;
         /// Calculo cosas de los turnos
         
         /// PUNTO A
         if(horario == 'N'){
            pa_cantidad++;
            pa_suma+=horas;   
         }
         
         /// PUNTO B
         if(horas>8){
            pb_horasExtras+= horas - 8;
         }
         
         /// PUNTO C
         switch(horario){
         case 'M':
            pc_trabajoM = true;
            break;
         case 'T':
            pc_trabajoT = true;
            break;
         case 'N':
            pc_trabajoN = true;
            break;
         }
          
         /// PUNTO D
         switch(horario){
         case 'M':
            pd_cantidadManiana+=horas;
            break;
         case 'T':
            pd_cantidadTarde+=horas;
            break;
         case 'N':
            pd_cantidadNoche+=horas;
            break;
         }
         
         
         cout << "Ingrese numero de turno:";
         cin >> turno;
      }
      /// Muestro o calculo cosas del enfermero
      
      /// PUNTO A
      if(pa_cantidad>0){
         cout << "A) El promedio es: " << pa_suma/pa_cantidad << endl;   
      }
      else{
         cout << "A) No tuvo horarios de la noche: " << endl;
      }
      
      /// Punto C
      if(pc_trabajoM && pc_trabajoN && pc_trabjoT){
         pc_cantidad++;   
      }
      
      
      cout << "Ingrese legajo:";
      cin >> legajo;
   }
   /// muestro cosas de todos los enfermeros
   
   cout << "B) La cantidad de horas extras son: " << pb_horasExtras << endl;
   
   cout << "C) La cantidad de enfermeros son: " << pc_cantidad << endl;
   
   if(pd_cantidadManiana < pd_cantidadNoche && pd_cantidadManiana < pd_cantidadTarde){
      cout << "D) El menor es Mañana"<<endl;
   }
   else if(pd_cantidadNoche < pd_cantidadTarde){
      cout << "D) El menor es Noche"<<endl;
   }
   else{
      cout << "D) El menor es Tarde"<<endl;
   }
   
	return 0;
}
