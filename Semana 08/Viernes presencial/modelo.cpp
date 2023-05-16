#include <iostream>
using namespace std;

int main(){
  int nroParticipante, minutos, nroVuelta, descalificado, i;

  /// A
  int nroGanador, tiempoGanador, tiempoParticipante;
  int contadorPosiblesGanadores = 0;
  bool fueDescalificado;

  /// B
  int cantParticipantesDescalificados = 0;

  /// C
  int cantParticipantesNoDescalificadosUltimaVuelta = 0;

  /// D
  int cantVueltasDescalificadas, cantVueltasNoDescalificadas;
  float porcDescalificadas, porcNoDescalificadas;

  cout << "Participante: ";
  cin >> nroParticipante;

  while (nroParticipante >= 0){

      tiempoParticipante = 0;
      fueDescalificado = false;
      cantVueltasDescalificadas = 0;
      cantVueltasNoDescalificadas = 0;

      for(i=1; i<=4; i++){
        cout << "Nro vuelta: ";
        cin >> nroVuelta;
        cout << "Minutos: ";
        cin >> minutos;
        cout << "Descalificado: ";
        cin >> descalificado;

        if (descalificado == 1){
          fueDescalificado = true;
          cantVueltasDescalificadas++;
        }
        else{
          cantVueltasNoDescalificadas++;
        }

        tiempoParticipante += minutos;

        if (i==4 && descalificado == 0){
          cantParticipantesNoDescalificadosUltimaVuelta++;
        }

      }
      cout << endl << endl;
      porcDescalificadas = cantVueltasDescalificadas * 100.0/4;
      porcNoDescalificadas = 100 - porcDescalificadas;

      cout << "PUNTO D" << endl;
      cout << "% DESC   : " << porcDescalificadas << endl;
      cout << "% NO DESC: " << porcNoDescalificadas << endl << endl << endl;

      if (fueDescalificado == false){
        contadorPosiblesGanadores++;
        if (contadorPosiblesGanadores == 1 || tiempoParticipante < tiempoGanador){
          tiempoGanador = tiempoParticipante;
          nroGanador = nroParticipante;
        }
      }
      else{
        cantParticipantesDescalificados++;
      }

      cout << "Participante: ";
      cin >> nroParticipante;

  }

  cout << endl << "PUNTO A" << endl;
  cout << "NRO: " << nroGanador << endl << "TIEMPO: " << tiempoGanador << endl << endl;
  cout << "PUNTO B" << endl;
  cout << "CANTIDAD DESCALIFICADOS: " << cantParticipantesDescalificados << endl << endl;
  cout << "PUNTO C" << endl;
  cout << "CANTIDAD NO DESC. ULTIMA VUELTA: " << cantParticipantesNoDescalificadosUltimaVuelta << endl;

  return 0;
}
