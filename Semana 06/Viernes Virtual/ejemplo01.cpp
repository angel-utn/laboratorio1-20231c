/**
Pregunta en zoom:
   Yo no entiendo muy bien lo de igualar la variable al iniciar los ciclos

*/
#include <iostream>
using namespace std;

int main(){
   int i;

   for(i=1; i<=10; i++){
      cout << i << " ";
   }
   cout << endl << "Fuera del for: " << i << endl;

   for(int x=21; x<=30; x++){
      cout << x << " ";
   }

   return 0;
}
