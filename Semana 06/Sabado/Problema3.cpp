#include <iostream>

using namespace std;

/**
Hacer un programa que solicite números enteros hasta que se ingrese un número par. Calcular e informar:
A) El máximo de los números ingresados.
B) El promedio de los números negativos ingresados.

NOTA: El número par ingresado no debe formar parte de ninguno de los cálculos.



*/

int main()
{
    /// Datos de entrada
    int numero;

    /// Datos de salida
    int maximo = 0;
    float promedio;

    int contadorNegativos = 0;
    int acumuladorNegativos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero %2 != 0)
    {
        maximo = numero;
    }

    while(numero %2 != 0)
    {
        /// PUNTO A
        if (numero > maximo)
        {
            maximo = numero;
        }

        /// PUNTO B
        if (numero < 0)
        {
            contadorNegativos = contadorNegativos + 1;
            acumuladorNegativos = acumuladorNegativos + numero;
            /**
            -1  -1
            -11 -12
            3   -12
            -5  -17
            2

            -17
            */
        }

        cout << "Ingrese otro numero: ";
        cin >> numero;
    }

    /// PUNTO A
    if (maximo != 0)
    {
        cout << "Maximo: " << maximo << endl;
    }
    else
    {
        cout << "No se ingresaron numeros impares" << endl;
    }

    /// PUNTO B
    /// promedio = suma de todos los ingresos / cantidad de ingresos
    if (contadorNegativos > 0)
    {
        promedio = acumuladorNegativos / (float)contadorNegativos;
        cout << "El promedio de negativos es: " << promedio << endl;
    }
    else
    {
        cout << "No se ingresaron negativos" << endl;
    }

    return 0;
}
