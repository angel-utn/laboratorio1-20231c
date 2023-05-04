#include <iostream>

using namespace std;

int main()
{
    int contador = 0;
    int acumulador = 0;
    int n;
    float promedio;

    while(contador < 3)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if (n%2 != 0)
        {
            contador = contador + 1;
            acumulador += n;
        }
    }
    /// suma de numeros / cantidad de numeros
    promedio = acumulador / (float)3; /// CASTEO

    cout << "Promedio: " << promedio;


    return 0;
}
