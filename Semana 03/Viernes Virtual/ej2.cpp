#include <iostream>

using namespace std;

int main()
{
    int nro;
    cout << "Ingrese un numero entero: ";
    cin >> nro;

    //IFs anidados
    if(nro > 0)
    {
        cout << "Es positivo" << endl;
    }
    else
    {
        if(nro == 0)
        {
            cout << "Es cero" << endl;
        }
        else
        {
            cout << "Es negativo" << endl;
        }
    }

    /* OTRA FORMA: IFs independientes
    if(nro > 0){
      cout << "Es positivo" << endl;
    }
    if(nro == 0){
      cout << "Es cero" << endl;
    }
    if(nro < 0){
      cout << "Es negativo" << endl;
    }
    */

    /* CON ELSE-IF
    if(nro > 0){
      cout << "Es positivo" << endl;
    }
    else if(nro == 0){
      cout << "Es cero" << endl;
    }
    else{
      cout << "Es negativo" << endl;
    }
    */

    return 0;
}
