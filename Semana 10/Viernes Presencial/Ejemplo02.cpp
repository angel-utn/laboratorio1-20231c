/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada 
venta se registró el número de venta, la forma de pago (1 a 3), el número de 
día y el importe de la venta. El fin de la carga de datos se indica con 
número de venta igual a 0.
Se pide calcular e informar:
PTO A - Por cada día del mes, el total facturado.
PTO B - Los días del mes que no tuvieron ventas.
PTO C - Por cada forma de pago y día, la cantidad de ventas realizadas.
*/

#include <iostream>

using namespace std;

int main (){

    int nroVta, fp, dia;
    float imp;

    // PTO A
    const int MES = 31;
    float vPTOA[MES] = {};

    // PTO C
    const int FPAGO = 3;
    float mPTOC[FPAGO][MES] = {};


    cout << "Ingrese nro vta: ";
    cin >> nroVta;

    while(nroVta != 0){
        cout << "Ingrese forma de pago: ";
        cin >> fp;

        cout << "Ingrese dia: ";
        cin >> dia;

        cout << "Ingrese imp: ";
        cin >> imp;

        // PTO A
        vPTOA[dia-1]+=imp;

        // PTO C
        mPTOC[fp-1][dia-1]+=imp;

        cout << "Ingrese nro vta: ";
        cin >> nroVta;

    }

    // PTO A
    cout << endl << endl << "Recaudo:" << endl;
    for(int j = 0; j < MES; j++){
        cout << j+1 << " - " <<vPTOA[j] << endl;
    }

    // PTO B
    cout << endl << endl << "Dias sin venta:" << endl;
    for(int j = 0; j < MES; j++){
        if(vPTOA[j] == 0){
            cout << j+1 << " - ";
        }
    }

    // PTO C
    for (int c = 0; c < FPAGO; c++){
        cout << "Forma de pago " << c+1 << endl;
        for (int  f = 0; f < MES; f++){
            cout << "Dia " << f+1 << ": " << mPTOC[c][f] << endl;
        }
    }


return 0;
}
