/*
DIVIDENDO   DIVISOR   RESULTADO
int         int       int (cociente división entera)
float       int       float
int         float     float
float       float     float
*/

#include <iostream>

using namespace std;

int main()
{
  int alfajores = 5, personas = 2;
  float resultado;
  int resto = 0;

  //SI NO HAY POSIBILIDAD DE FRACCIONAR LOS ALFAJORES: TENGO UNA DIVISIÓN ENTERA:
  resultado = alfajores / personas; //cociente de la división entera: 2 alfajores para cada persona
  resto = alfajores % personas; //sobra 1 alfajor

  /*
  SI PUEDO FRACCIONAR LOS ALFAJORES...
  DEBO HACER UN CASTEO, YA QUE ESTOY DIVIDIENDO DOS ENTEROS. SI NO LO HAGO, resultado NO VA A TENER
    DECIMALES (LOS TRUNCA), AUNQUE ESTÉ DECLARADA COMO FLOAT
  NOTA 1: EL RESTO ES SÓLO PARA LA DIVISIÓN ENTERA, ACÁ NO SE UTILIZA  (INICIALICÉ LA VARIABLE resto
    EN 0 PARA QUE NO TENGA BASURA)
  NOTA 2: EL CASTEO LO PUEDO HACER TANTO PARA alfajores COMO PARA personas
  */

  //resultado = (float)alfajores / personas; // 2.5 alfajores para cada persona

  cout << "ALFAJORES PARA CADA PERSONA: " << resultado << endl;
  //cout << alfajores << endl;
  cout << "ALFAJORES QUE SOBRAN: " << resto << endl;

  //PARA FORZAR QUE EL PROGRAMA LE PIDA AL USUARIO QUE PRESIONE UNA TECLA ANTES DE CERRAR LA CONSOLA:
  //int aux;
  //cin >> aux;

  //cin.get();

  //system("pause");
	return 0;
}
