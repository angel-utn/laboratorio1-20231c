/*
Durante la Edad Media existía un popular juego de dados llamado Nomis.
El juego consistía en tirar dos dados de seis caras durante cinco rondas.
En cada ronda se debía anotar la diferencia absoluta entre las caras de los
dados obtenidos en la tirada. Esta diferencia absoluta se utiliza para calcular
el puntaje a partir de las siguientes reglas:

Si en una ronda se obtienen dos dados con la cara 1 o dos dados con la cara 6:
El puntaje de esa ronda es de 10 puntos.

Cualquier diferencia absoluta mayor a uno: El puntaje de esa ronda es igual a
la diferencia absoluta.

Cualquier escalera: El puntaje de la ronda es cero y se pierde el total
acumulado hasta el momento.

NOTA: Una escalera es cualquiera de las siguientes combinaciones sin importar
el orden de los dados (1-2, 2-3, 3-4, 4-5, 5-6, 1-6)

El juego debe pedir en cada ronda el valor de los dos dados y mostrar el
puntaje de la ronda y el puntaje acumulado. Al finalizar las cinco rondas debe
mostrar el puntaje acumulado.

*/

#include <iostream>

using namespace std;

int main()
{
	int dado1, dado2, acuRonda, acuTotal = 0, dif, i;
	const int RONDAS = 5;

	//DATOS DE ENTRADA
	for(i=0; i<RONDAS; i++){
     //acuRonda = 0;  NO HACE FALTA PORQUE SU VALOR SE ACTUALIZA EN CADA RONDA, NO ES ACUMULADOR

     cout << "Dado 1: ";
     cin >> dado1;
     cout << "Dado 2: ";
     cin >> dado2;

     dif = dado1 - dado2;
     if(dado1 < dado2){     //if(dif < 0)
        //dif = dif * -1;
        dif *= -1;
     }

     if((dado1 == 1 && dado2 == 1) || (dado1 == 6 && dado2 == 6)){
          acuRonda = 10;
          acuTotal += 10;
        }
     else if((dif > 1) && (dif < 5)){
          acuRonda = dif;
          acuTotal += dif;
     }
     else{
          acuTotal = 0;
     }

     /*TAMBIÉN PODRÍA ACUMULAR EL PUNTAJE TOTAL ACÁ, AFUERA DEL IF
     (previamente lo saco del IF, líneas 52 y 56)
     acuTotal += acuRonda;
     */

     /* NOTA: EL ENUNCIADO NO DICE QUÉ HACER SI LA DIFERENCIA ABSOLUTA ES 0 (DADOS IGUALES)
          Y LOS DADOS NO SON NI 1 NI 6
          EN ESTE EJEMPLO YO TOMÉ LA DECISIÓN DE QUE SE COMPORTE IGUAL QUE EN LA ESCALERA
     */

     cout << endl;
     cout << "Puntaje ronda " << i+1 << ": " << acuRonda << endl;
     cout << "Puntaje acumulado: " << acuTotal << endl;
	}

	cout << "Puntaje final: " << acuTotal << endl;

	return 0;
}
