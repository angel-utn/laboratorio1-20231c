#include <iostream>

using namespace std;

int main()
{
    int n, cantidad;

    cantidad = 0;

    do
    {
        cout << "Ingrese numero: ";
        cin >> n;
        if(n>0)
        {
            cantidad++;
        }
    }
    while(n >= 0);


    cout << "Catidad de numeros : " << cantidad;


    return 0;
}
