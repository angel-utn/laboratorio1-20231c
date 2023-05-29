#include <iostream>

using namespace std;
/*
Cargar las notas del primer parcial de
los 78 estudiantes de un curso. Luego
de cargar todas las notas:
 - Listar cuántos estudiantes obtuvieron
 una nota mayor al promedio.

 - Pedir un número y mostrar por pantalla
 la nota registrada. Por ejemplo, se ingresa
 10 para mostrar el décimo examen.

 - Obtener la mejor calificación y cuántos
 estudiantes lograron dicha calificación.
*/
int main()
{
    const int CANTIDAD = 78;
    float vec_notas[CANTIDAD];
    float acu_notas = 0;
    float promedio;
    int contador_notas = 0;

    cout << "Ingrese las notas: " << endl;
    /// CARGA
    for(int i=0; i<CANTIDAD; i++)
    {
        cin >> vec_notas[i];
    }
    cout << endl;

    /// CALCULO
    for(int i=0; i<CANTIDAD; i++)
    {
//        cout << vec_notas[i] << " ";
        acu_notas += vec_notas[i];
    }

    promedio = acu_notas / CANTIDAD;

    cout << "Promedio: " << promedio << endl;

    for (int i=0; i<CANTIDAD; i++)
    {
        if (vec_notas[i] > promedio)
        {
            contador_notas++;
        }
    }

    cout << "Cantidad notas mayores al promedio: "
    << contador_notas << endl;

    int numero_nota;
    cout << "Ingrese numero de nota: ";
    cin >> numero_nota;

    cout << vec_notas[numero_nota-1] << endl;


    float nota_maxima;
    for (int i=0; i<CANTIDAD; i++)
    {
        if (i == 0 || vec_notas[i] > nota_maxima)
        {
            nota_maxima = vec_notas[i];
        }
    }

    cout << "Nota maxima: " << nota_maxima << endl;

    int cant_estudiantes = 0;
    for (int i=0; i<CANTIDAD; i++)
    {
        if (vec_notas[i] == nota_maxima)
        {
            cant_estudiantes++;
        }
    }
    cout << "Estudiantes con nota maxima: " << cant_estudiantes << endl;

    return 0;
}
