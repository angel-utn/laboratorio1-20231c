#include <iostream>
using namespace std;

int main(){
  int cantHoras, cantDias, cantMeses, cantAnios, i;

  cout << "Ingresar cantidad de horas: ";
  cin >> cantHoras;

  cantDias = cantHoras / 24;
  cantMeses = cantDias / 30;
  cantAnios = cantDias / 365;

  for(i=1; i<=cantDias; i++){
    cout << "D";
  }
  cout << endl;
  for(i=1; i<=cantMeses; i++){
    cout << "M";
  }
  cout << endl;
  for(i=1; i<=cantAnios; i++){
    cout << "A";
  }
  return 0;
}
