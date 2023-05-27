#include <iostream>
using namespace std;

int main()
{
  int dia, artista, genero, minutos, canciones;

  /// Alternativa con vectores
  int vecMinutosGeneroDia1[25] = {};
  int vecMinutosGeneroDia2[25] = {};
  int vecMinutosGeneroDia3[25] = {};

  /// Alternativa con matrices
  int matMinutosGeneroShow[25][3] = {};

  cout << "Día: ";
  cin >> dia;

  while (dia != 0){
    cout << "Artista: ";
    cin >> artista;
    cout << "Género : ";
    cin >> genero;
    cout << "Minutos: ";
    cin >> minutos;
    cout << "Canciones: ";
    cin >> canciones;

    /// E - Con vectores
    switch(dia){
      case 1:
        vecMinutosGeneroDia1[genero-1] += minutos;
      break;
      case 2:
        vecMinutosGeneroDia2[genero-1] += minutos;
      break;
      case 3:
        vecMinutosGeneroDia3[genero-1] += minutos;
      break;
    }

    /// E - Con matriz
    matMinutosGeneroShow[genero-1][dia-1] += minutos;

    cout << "Día: ";
    cin >> dia;
  }

  int i, j;
  cout << "Estadísticas con los vectores: " << endl;
    cout << "Día    : 1" << endl;
  for (i=0; i<25; i++){
    cout << "\tGénero : " << i+1 << endl;
    cout << "\tMinutos: " << vecMinutosGeneroDia1[i] << endl << endl;
  }
    cout << "Día    : 2" << endl;
  for (i=0; i<25; i++){
    cout << "\tGénero : " << i+1 << endl;
    cout << "\tMinutos: " << vecMinutosGeneroDia2[i] << endl << endl;
  }
    cout << "Día    : 3" << endl;
  for (i=0; i<25; i++){
    cout << "\tGénero : " << i+1 << endl;
    cout << "\tMinutos: " << vecMinutosGeneroDia3[i] << endl << endl;
  }

  cout << endl << endl;
  cout << "Estadísticas con la matriz: " << endl;
  for(i=0; i<3; i++){
    cout << "Día " << i+1 << endl;
    for(j=0; j<25; j++){
      cout << "\tGénero : " << j+1 << endl;
      cout << "\tMinutos: " << matMinutosGeneroShow[j][i] << endl << endl;
    }
  }


  return 0;
}
