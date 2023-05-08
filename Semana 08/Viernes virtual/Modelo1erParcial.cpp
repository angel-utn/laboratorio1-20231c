#include <iostream>

using namespace std;

int main()
{
    const int VUELTAS = 4;
    int codPart, nroVuelta, tiempo, i;
    bool descalificado;
    //PUNTO A
    int tiempoPart;
    bool descalificadoGan, primero = true;
    int menorTiempo;
    int codPartGan, codPartAnt;
    //PUNTO B
    int cantVueltasDescalif;
    int cantPartDescTotal = 0;
    //PUNTO C
    int cantPartNoDescUltVuelta = 0;
    //PUNTO D
    float porcDesc, porcNoDesc;
    int cantVueltasNoDescalif;

    cout << "Codigo de participante: ";
    cin >> codPart;

    while(codPart >= 0)
    {
        tiempoPart = 0;
        descalificadoGan = false;
        cantVueltasDescalif = 0;
        cantVueltasNoDescalif = 0;

        for(i=1; i<=VUELTAS; i++)
        {
            cout << "Numero de vuelta: ";
            cin >> nroVuelta;
            cout << "Tiempo empleado: ";
            cin >> tiempo;
            cout << "Descalificado: ";
            cin >> descalificado;

            tiempoPart += tiempo;

            if(descalificado == true)
            {
                descalificadoGan = true;
                //PUNTO B
                cantVueltasDescalif++;
            }
            //PUNTO C
            else{
                if(nroVuelta == VUELTAS){
                  cantPartNoDescUltVuelta++;
                }
                cantVueltasNoDescalif++;
            }

            codPartAnt = codPart;

            cout << "Codigo de participante: ";
            cin >> codPart;

        }

        if(((primero == true) || (tiempoPart < menorTiempo)) && (!descalificadoGan))
        {
            menorTiempo = tiempoPart;
            codPartGan = codPartAnt;
            primero = false;
        }

        if(cantVueltasDescalif > 0){
          cantPartDescTotal ++;
        }

        //PUNTO D

        porcDesc = (float)cantVueltasDescalif / VUELTAS * 100;
        porcNoDesc = (float)cantVueltasNoDescalif / VUELTAS * 100;

        cout << endl;
        cout << "Participante: " << codPartAnt << endl;
        cout << "Porcentaje de vueltas descalificadas: " << porcDesc << endl;
        cout << "Porcentaje de vueltas no descalificadas: " << porcNoDesc << endl;

    }

    //PUNTO A
    cout << endl;
    cout << "El ganador es el participante: " << codPartGan << endl;
    cout << "El tiempo demorado es de: " << menorTiempo << endl;

    //PUNTO B
    cout << endl;
    cout << "Cantidad de participantes que fueron descalificados al menos una vez: " << cantPartDescTotal << endl;

    //PUNTO C
    cout << endl;
    cout << "Cantidad de participantes que no fueron descalificados en la ultima vuelta: " << cantPartNoDescUltVuelta << endl;

    return 0;
}
