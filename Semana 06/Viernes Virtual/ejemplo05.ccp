/*
Hacer un programa que solicite números enteros hasta que se ingrese un número par.


Calcular e informar:
A) El máximo de los números ingresados.
B) El promedio de los números negativos ingresados.

NOTA: El número par ingresado no debe formar parte de ninguno de los cálculos.
*/

#include <iostream>

using namespace std;

int main(void)
{
    // 3 5 7 9 -11 -213 0 como cero es par Termina el ciclo.

    // PROMEDIO

    int num, cNum = 0, maximo, acuNeg=0, contNeg=0;
    float promedio;

    cout << "ingrese un numero: ";
    cin >> num;

    while (num%2 != 0){
        cNum++;
        if(cNum==1 || num > maximo){
            maximo=num;
        }

        // CALCULO PROMEDIO
        if(num<0){
            contNeg++;          // CONTADOR CRECE DE 1 EN 1
            acuNeg=acuNeg+num;  // ACUMULADOR CRECE EN VALOR VARIABLE INGRESADO POR EL USUARIO.
        }

        cout << "ingrese un numero: ";
        cin >> num;
    }

    if(cNum>0){
        cout << endl << "El valor maximo es: " << maximo << endl;
    }
    else{
        cout << "Lista vacía" << endl;
    }

    if(contNeg>0){
        promedio = (float)acuNeg/contNeg;
        cout << "El promedio de los negativos: " << promedio << endl;

    }
    else{
        cout << "Lista sin negativos" << endl;
    }


    return 0;
}
