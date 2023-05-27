#include <iostream>
using namespace std;

int main()
{
  string nombreEstaciones[4]={"Verano", "Otoño", "Invierno", "Primavera"};;
  int votosEstaciones[4]={};
  int i, nroEstacion;

  /**
    Dimensionar el vector
    int vec[4];

    Indexación en base cero:
    vec[0] --> Primer elemento
    vec[3] --> Ultimo elemento
  */


  for(i=1; i<=10; i++){
    do{
      cout << i << "# -Estación del año favorita (1-Verano | 2-Otoño | 3-Invierno | 4-Primavera) : ";
      cin >> nroEstacion;
    }while(! (nroEstacion >= 1 && nroEstacion <= 4) );

    votosEstaciones[nroEstacion - 1]++;
  }

  cout << endl << endl;
  cout << "Votos finales" << endl;
  for(i=0; i<4; i++){
      cout << nombreEstaciones[i] << ": " << votosEstaciones[i] << " votos" << endl;
  }



    return 0;
}
