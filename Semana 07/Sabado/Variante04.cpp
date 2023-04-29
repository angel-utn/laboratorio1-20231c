#include <iostream>

using namespace std;

int main()
{
    int codDestino, codDestinoAnterior, mes, cantPasajes;
    float totalRec;
    //PUNTO A
    int cantTotalPasajes = 0;
    //PUNTO B
    float totalRecXDestino;

    cout << "DESTINO: ";
    cin >> codDestino;

    while(codDestino != 0)
    {
        totalRecXDestino = 0;

        codDestinoAnterior = codDestino;

        while(codDestino == codDestinoAnterior)
        {
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

            cout << "DESTINO: ";
            cin >> codDestino;
        }
        //PUNTO B
        cout << "El total recaudado por el destino #" << codDestinoAnterior << " es de $" << totalRecXDestino << endl;
    }

    //PUNTO A
    cout << "Cantidad total de pasajes vendidos: " << cantTotalPasajes << endl;

    return 0;
}
