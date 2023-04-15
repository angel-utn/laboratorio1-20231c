// PROBLEMA 6
#include <iostream>

using namespace std;

int main()
{
    char cod;
    float cargoFijo, pKw;

    int medidorAnt, medidorAct, consumo;
    float importe;

    cout << "Medicion actual: ";
    cin >> medidorAct;
    cout << "Medicion anterior: ";
    cin >> medidorAnt;
    cout << "Ingrese codigo de tarifa: ";
    cin >> cod;

    switch(cod)
    {
    case 'A':
    case 'a':
        cargoFijo = 500;
        pKw = 1;
        break;
    case 'B':
    case 'b':
        cargoFijo = 750;
        pKw = 1.25;
        break;
    case 'C':
    case 'c':
        cargoFijo = 600;
        pKw = 3.75;
        break;
    case 'D':
    case 'd':
        cargoFijo = 1100;
        pKw = 6;
        break;
    case 'E':
    case 'e':
        cargoFijo = 1500;
        pKw = 12.5;
        break;
    case 'F':
    case 'f':
        cargoFijo = 1800;
        pKw = 20;
        break;
    }

    consumo = medidorAct - medidorAnt;
    importe = cargoFijo + consumo * pKw;

    cout << endl << "El importe a abonar es de: $" << importe << endl;
    return 0;
}
