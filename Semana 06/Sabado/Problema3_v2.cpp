#include <iostream>

using namespace std;

/**
Hacer un programa que solicite números enteros hasta que se ingrese un número par. Calcular e informar:
A) El máximo de los números ingresados.
B) El promedio de los números negativos ingresados.

NOTA: El número par ingresado SÍ debe formar parte de TODOS de los cálculos.



*/

int main()
{
    /// Datos de entrada
    int numero;

    /// Datos de salida
    int maximo;
    float promedio;

    int contadorNegativos = 0;
    int acumuladorNegativos = 0;

    bool banderaMaximo = false;

    do {
        cout << "Ingrese otro numero: ";
        cin >> numero;

        /// PUNTO A
        if (banderaMaximo == false)
        {
            maximo = numero;
            banderaMaximo = true;
        }
        else if (numero > maximo)
        {
            maximo = numero;
        }

        /// PUNTO B
        if (numero < 0)
        {
            contadorNegativos = contadorNegativos + 1;
            acumuladorNegativos = acumuladorNegativos + numero;
        }
    }while(numero %2 != 0);

    /// PUNTO A
    cout << "Maximo: " << maximo << endl;

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
