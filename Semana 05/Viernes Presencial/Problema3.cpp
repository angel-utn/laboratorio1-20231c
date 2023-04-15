#include <iostream>
using namespace std;

int main(){
  const int CANT_LOCALIDADES = 3;
  int i;
  string localidad;
  int cantRiesgo, cantNoRiesgo, poblacion, cantRegistradosLocalidad;

  ///A
  int cantVacunadores;
  int cantDiasCampania;

  ///B
  int cantTotalRegistrados = 0;
  int totalPoblacion = 0;
  float porcentaje;

  ///C
  int cantLocalidadConMasRiesgo = 0;

  for(i=1; i<=CANT_LOCALIDADES; i++){

    cout << "Localidad: ";
    cin >> localidad;

    cout << "Cantidad riesgo: ";
    cin >> cantRiesgo;

    cout << "Cantidad no riesgo: ";
    cin >> cantNoRiesgo;

    cout << "Poblacion de " << localidad << " : ";
    cin >> poblacion;

    cout << endl;

    cantRegistradosLocalidad = cantNoRiesgo + cantRiesgo;

    /// A
    cantVacunadores = cantRegistradosLocalidad / 70;
    if (cantRegistradosLocalidad % 70 > 0){
      cantVacunadores++;
    }
    cantDiasCampania = cantVacunadores / 10;
    if (cantVacunadores % 10 > 0){
      cantDiasCampania++;
    }

    /// B
    cantTotalRegistrados += cantRegistradosLocalidad;
    totalPoblacion += poblacion;

    /// C
    if (cantRiesgo > cantNoRiesgo){
      cantLocalidadConMasRiesgo++;
    }

    cout << "PUNTO A" << endl;
    cout << "Localidad   : " << localidad << endl;
    cout << "Vacunadores : " << cantVacunadores << endl;
    cout << "Dias totales: " << cantDiasCampania << endl;

  }

  cout << "PUNTO B: " << endl;
  porcentaje = cantTotalRegistrados*100/(float)totalPoblacion;
  cout << "Cantidad de registrados  : " << cantTotalRegistrados << endl;
  cout << "Porcentaje de registrados: " << porcentaje<< endl;

  cout << "PUNTO C: " << endl;
  cout << "Cantidad de localidades: " << cantLocalidadConMasRiesgo << endl;

  return 0;
}
