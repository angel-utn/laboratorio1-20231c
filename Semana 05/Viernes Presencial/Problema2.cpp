#include <iostream>
using namespace std;

int main(){
  int ronda, dado1, dado2, diferencia;
  int puntos, puntosAcumulados=0;

  for(ronda=1; ronda<=5; ronda++){
      cout << "RONDA # " << ronda<< endl;

      cout << "Valor del dado 1: ";
      cin >> dado1;
      cout << "Valor del dado 2: ";
      cin >> dado2;

      /// Calculo la diferencia absoluta
      diferencia = dado1 - dado2;
      if (diferencia < 0){
        diferencia = diferencia * -1;
      }

      /// Pares de 1 y 6 iguales
      if ((dado1 == 1 && dado2 == 1) || (dado1 == 6 && dado2 == 6)){
          puntos = 10;
      }
      else{
        // El otro
        if(diferencia >= 0){
            puntos = diferencia;
        }
        // Escalera
        if (diferencia == 1 || diferencia == 5){
            puntos = 0;
            puntosAcumulados = 0;
        }
      }

     puntosAcumulados = puntosAcumulados + puntos; // puntosAcumulados += puntos;

     cout << endl << "Puntos de la ronda: " << puntos << endl;
     cout << "Puntos acumulados : " << puntosAcumulados << endl;
     cout << "---------------------------------------------" << endl;
  }
  cout << endl << endl;
  cout << "PUNTAJE TOTAL: " << puntosAcumulados << endl;


  return 0;
}
