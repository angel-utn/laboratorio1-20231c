/*
  Hacer un programa que permita cargar la inicial del color de una semáforo
  e indique qué debería hacer el peatón en cada caso.
*/
#include <iostream>
using namespace std;

int main(){
  char colorSemaforo;

  cout << "Ingresa color: (R-Rojo, A-Amarillo, V-Verde) ";
  cin >> colorSemaforo;

  switch(colorSemaforo){
    case 'R':
    case 'r':
       cout << "El peaton puede cruzar";
    break;
    case 'A':
    case 'a':
       cout << "El peaton debe ser prudente";
    break;
    case 'V':
    case 'v':
       cout << "El peaton debe esperar";
    break;
    default:
       cout << "Semaforo averiado. Estas por tu cuenta.";
    break;
  }

  return 0;
}
