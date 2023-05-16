#include <iostream>
using namespace std;

int main() {
   int codigoHortaliza, codigoLocalidad;
   float cantidadPrevistas, cantidadCosechada, inversion;
   /// PUNTO A
   int pa_cantidad;
   
   /// PUNTO B
   float pb_cantidadPrevista, pb_cantidadCosechada;
   pb_cantidadPrevista = pb_cantidadCosechada = 0;
   
   /// PUNTO C
   float pc_inversionTotal;
   int pc_cantidad;
   pc_cantidad = 0;
   
   /// PUNTO D
   float pd_menor;
   int pd_localidad;
   
   pd_menor = -1;
   
   for(int i=1; i<=10; i++){
      pa_cantidad = 0;
      pc_inversionTotal = 0;
      cout << "Ingrese codigo de hortaliza: ";
      cin >> codigoHortaliza;
      
      cout << "Ingrese codigo de localidad: ";
      cin >> codigoLocalidad;
      
      while(codigoLocalidad != 0){
         cout << "Ingrese cantidad total de toneladas previstas: ";
         cin >> cantidadPrevistas;
         
         cout << "Ingrese cantidad total de toneladas cosechadas: ";
         cin >> cantidadCosechada;
         
         cout << "Ingrese cantidad invertida: ";
         cin >> inversion;
         
         /// PUNTO A
         if(cantidadCosechada < cantidadPrevistas){
            pa_cantidad++;   
         }
         
         /// PUNTO B
         pb_cantidadCosechada += cantidadCosechada;
         pb_cantidadPrevista+= cantidadPrevistas;
         
         /// PUNTO C
         pc_inversionTotal += inversion;
         
         /// PUNTO D
         if(codigoHortaliza == 20){
            if(pd_menor == -1 || cantidadCosechada < pd_menor){
               pd_menor = cantidadCosechada;
               pd_localidad = codigoLocalidad;
            }
         }
         
        
         cout << "Ingrese codigo de localidad: ";
         cin >> codigoLocalidad;
      }
      
      cout << "A) La cantidad de localidades es: "<< pa_cantidad << endl;
      
      if(pc_inversionTotal > 100){
         pc_cantidad++;
      }
   }
   
   cout << "B) Porcentaje de cosecha es: " << pb_cantidadCosechada*100/pb_cantidadPrevista << endl;
   
   cout << "C) La cantidad de hortalizas que superaron los 100mil son: "<< pc_cantidad << endl;
   
   if(pd_menor!=-1){
      cout << "D) La localidad con menor cosecha de la hortaliza 20 es:" << pd_localidad << endl;   
   }
   else{
      cout << "D) No se cargaron localidades para la hortaliza 20" << endl;
   }
   
	
	return 0;
}

