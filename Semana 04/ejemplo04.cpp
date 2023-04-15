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
    int nota1, nota2, nota3, nota4;
    string estadoEstudiante;

    cout << "Ingresar notas: " << endl;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    cin >> nota4;

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7){
      estadoEstudiante = "Promociona la materia";
    }
    else{
      if (nota1 < 4 && nota2 < 4 && nota3 < 4 && nota4 < 4){
        estadoEstudiante = "Recursa la materia";
      }
      else{

        /*
            N1 N2 N3
            N1 N2 N4
            N1 N3 N4
            N2 N3 N4
        */

        if ( (nota1 >= 4 && nota2 >= 4 && nota3 >=4) ||
             (nota1 >= 4 && nota2 >= 4 && nota4 >=4) ||
             (nota1 >= 4 && nota3 >= 4 && nota4 >=4) ||
             (nota2 >= 4 && nota3 >= 4 && nota4 >=4)
        ){
          estadoEstudiante = "Rinde examen final";
        }
        else{
          estadoEstudiante = "Recupera parciales";
        }
      }
    }

    cout << endl << "Estado del estudiante: " << estadoEstudiante;

    return 0;
}
