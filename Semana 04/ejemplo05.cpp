/**
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas
por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.

*/

#include <iostream>
using namespace std;

int main(){
    int nota, cantPromo=0, cantAprob=0;
    string estadoEstudiante;

    cout << "Ingresar nota: " << endl;
    cin >> nota;

    if (nota >= 7){
      cantPromo++;
    }
    else{
      if (nota >= 4){
        cantAprob++;
      }
    }

    cout << "Ingresar nota: " << endl;
    cin >> nota;

    if (nota >= 7){
      cantPromo++;
    }
    else{
      if (nota >= 4){
        cantAprob++;
      }
    }

    cout << "Ingresar nota: " << endl;
    cin >> nota;

    if (nota >= 7){
      cantPromo++;
    }
    else{
      if (nota >= 4){
        cantAprob++;
      }
    }

    cout << "Ingresar nota: " << endl;
    cin >> nota;

    if (nota >= 7){
      cantPromo++;

    }
    else{
      if (nota >= 4){
        cantAprob++;
      }
    }


    if (cantPromo == 4){
      estadoEstudiante = "Promociona la materia";
    }
    else{
      if (cantPromo+cantAprob >= 3){
        estadoEstudiante = "Rinde examen final";
      }
      else{
        if (cantPromo+cantAprob >= 1){
          estadoEstudiante = "Recupera parciales";
        }
        else{
          estadoEstudiante = "Recursa la materia";
        }
      }
    }


    cout << endl << estadoEstudiante;


    return 0;
}
