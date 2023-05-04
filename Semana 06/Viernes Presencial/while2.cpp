#include <iostream>

using namespace std;

int main()
{
    int acumulador = 0;
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    while(n != 0)
    {
        acumulador += n;

        cout << "Ingrese otro numero: ";
        cin >> n;
    }

    cout << "Suma de todos los numeros ingresados: " << acumulador;


    return 0;
}
