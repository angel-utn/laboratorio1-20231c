#include <iostream>

using namespace std;

int main()
{
    const int DESTINOS = 3;
    const int MESES = 4;
    int i, j;
    int codDestino, mes, cantPasajes;
    float totalRec;
    //PUNTO A
    int cantTotalPasajes = 0;
    //PUNTO B
    float totalRecXDestino;

    for(i=1; i<=DESTINOS; i++)
    {
        totalRecXDestino = 0;

        for(j=1; j<=MESES; j++)
        {
            cout << "DESTINO: ";
            cin >> codDestino;
            cout << "MES: ";
            cin >> mes;
            cout << "CANTIDAD DE PASAJES VENDIDOS: ";
            cin >> cantPasajes;
            cout << "TOTAL RECAUDADO: $";
            cin >> totalRec;
            cout << endl;

            //PUNTO A
            cantTotalPasajes += cantPasajes;
            //PUNTO B
            totalRecXDestino += totalRec;
        }
        //PUNTO B
        cout << "El total recaudado por el destino #" << codDestino << " es de $" << totalRecXDestino << endl;
    }

    //PUNTO A
    cout << "Cantidad total de pasajes vendidos: " << cantTotalPasajes << endl;

    return 0;
}
