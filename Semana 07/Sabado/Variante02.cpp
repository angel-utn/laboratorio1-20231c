#include <iostream>

using namespace std;

int main()
{
    const int DESTINOS = 3;
    int i;
    int codDestino, mes, cantPasajes;
    float totalRec;
    //PUNTO A
    int cantTotalPasajes = 0;
    //PUNTO B
    float totalRecXDestino;

    for(i=1; i<=DESTINOS; i++)
    {
        totalRecXDestino = 0;

        cout << "DESTINO: ";
        cin >> codDestino;
        cout << "MES: ";
        cin >> mes;

        while(mes != 0)
        {
            cout << "CANTIDAD DE PASAJES VENDIDOS: ";
            cin >> cantPasajes;
            cout << "TOTAL RECAUDADO: $";
            cin >> totalRec;
            cout << endl;

            //PUNTO A
            cantTotalPasajes += cantPasajes;
            //PUNTO B
            totalRecXDestino += totalRec;

            cout << "DESTINO: ";
            cin >> codDestino;
            cout << "MES: ";
            cin >> mes;
        }
        //PUNTO B
        cout << "El total recaudado por el destino #" << codDestino << " es de $" << totalRecXDestino << endl;
    }

    //PUNTO A
    cout << "Cantidad total de pasajes vendidos: " << cantTotalPasajes << endl;

    return 0;
}
