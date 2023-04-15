#include <iostream>

using namespace std;
/**
Problema 2
Durante la Edad Media existía un popular juego de dados llamado Nomis.
El juego consistía en tirar dos dados de seis caras durante cinco rondas.
En cada ronda se debía anotar la diferencia absoluta entre las caras de los dados
obtenidos en la tirada.
Esta diferencia absoluta se utiliza para calcular el puntaje
a partir de las siguientes reglas:

    Si en una ronda se obtienen dos dados con la cara 1 o dos dados con la cara 6:
        El puntaje de esa ronda es de 10 puntos.
    Cualquier diferencia absoluta mayor a uno:
        El puntaje de esa ronda es igual a la diferencia absoluta.
    Cualquier escalera:
        El puntaje de la ronda es cero y se pierde el total acumulado hasta el momento.

NOTA: Una escalera es cualquiera de las siguientes combinaciones
sin importar el orden de los dados (1-2, 2-3, 3-4, 4-5, 5-6, 1-6)

El juego debe pedir en cada ronda el valor de los dos dados
y mostrar el puntaje de la ronda y el puntaje acumulado.
Al finalizar las cinco rondas debe mostrar el puntaje acumulado.

Datos de entrada:
    primer dado, segundo dado

Datos de salida:
    puntaje de la ronda, puntaje acumulado

Operaciones:
    diferencia absoluta = primer dado - segundo dado
    si primer dado y segundo dado son 6 o son 1:
        suma 10 al puntaje
    si son escalera:
        puntaje de la ronda es 0
        reinicia puntaje total a 0
    si la diferencia absoluta es mayor a 1:
        suma la diferencia absoluta al puntaje


*/
int main()
{
    int primerDado, segundoDado;
    int puntajeRonda, puntajeTotal = 0;
    int diferenciaAbsoluta;

    const int CANTIDAD_RONDAS = 5;

    for (int i = 0; i < CANTIDAD_RONDAS; i++)
    {
        cout << "Primer dado: ";
        cin >> primerDado;
        cout << "Segundo dado: ";
        cin >> segundoDado;

        if (primerDado > segundoDado)
        {
            diferenciaAbsoluta = primerDado - segundoDado;
        }
        else
        {
            diferenciaAbsoluta = segundoDado - primerDado;
        }

        if (primerDado == 6 && segundoDado == 6 ||
            primerDado == 1 && segundoDado == 1)
        {
            puntajeRonda = 10;
            puntajeTotal += puntajeRonda;
        }
        else if (diferenciaAbsoluta > 1 && diferenciaAbsoluta < 5)
        {
            puntajeRonda = diferenciaAbsoluta;
            puntajeTotal += puntajeRonda;
        }
        else
        {
            if (diferenciaAbsoluta == 1 || diferenciaAbsoluta == 5)
            {
                puntajeRonda = 0;
                puntajeTotal = 0;
            }
            else
            {
                puntajeRonda = 0;
                //puntajeTotal += puntajeRonda;
            }
        }

        cout << "Puntaje ronda: " << puntajeRonda << endl;
        cout << "Puntaje acumulado: " << puntajeTotal << endl;
    }

    cout << "Puntaje total: " << puntajeTotal << endl;

    return 0;
}
