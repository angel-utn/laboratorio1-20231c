#include <iostream>
using namespace std;
/*
Código de participante (entero)
Número de vuelta (1 a 4)
Tiempo empleado (en minutos)
Descalificado (1 - Sí; 0 - No)
*/

int main() {
	int participante, vuelta, tiempo;
	bool descalificado;
	
	/// Punto A
	int pa_participante, pa_menorTiempo, pa_totalTiempo;
	bool pa_descalificado;
	
	/// Punto B
	int pb_cantidad;
	bool pb_estaDescalificado;
	
	/// Punto C
	int pc_cantidad;
	
	/// Punto D
	int pd_cantidad;
	float pd_porDescalificados, pd_porNoDescalificados;
	
	pa_menorTiempo = -1;
	
	pb_cantidad = 0;
	pc_cantidad = 0;
	
	
	cout << "Ingrese codigo de participante: ";
	cin >> participante;
	
	while(participante >= 0){
		pa_descalificado = false;
		pb_estaDescalificado = false;
		
		pd_cantidad = 0;
		pa_totalTiempo = 0;
		
		for(int i=1; i<=4; i++){
			cout << "Ingrese numero de vuelta: ";
			cin >> vuelta;
			
			cout << "Ingrese tiempo: ";
			cin >> tiempo;
			
			cout << "Descalificado (1- Si, 0- No): ";
			cin >> descalificado;
			
			/// Punto A
			pa_totalTiempo += tiempo;
			if(descalificado){
				pa_descalificado = true;
			}
			
			/// PUNTO B
			if(descalificado){
				pb_estaDescalificado=true;
			}
			
			/// PUNTO C
			if(vuelta == 4 && !descalificado){
				pc_cantidad++;
			}
			
			/// PUNTO D
			if(descalificado){
				pd_cantidad++;
			}
			
		}
		
		/// Punto A
		if(!pa_descalificado){
			if(pa_menorTiempo == -1 || pa_totalTiempo < pa_menorTiempo){
				pa_menorTiempo = pa_totalTiempo;
				pa_participante = participante;
			}	
		}
		
	
		/// PUNTO B
		if(pb_estaDescalificado){
			pb_cantidad++;
		}
		
		/// PUNTO D
		pd_porDescalificados = 100.0f * pd_cantidad / 4;
		pd_porNoDescalificados = 100.0f - pd_porDescalificados;
		
		cout << "D) Porcentaje de descalificado: " << pd_porDescalificados << "%"<<endl;
		cout << "D) Porcentaje de no descalificado: " << pd_porNoDescalificados << "%"<<endl;
		
		cout << "Ingrese codigo de participante: ";
		cin >> participante;
	}
	
	cout << "A) El ganador es: " << pa_participante << " se demoro " << pa_menorTiempo << " minutos." << endl;
	
	cout << "B) La cantidad de participantes descalificados son: " << pb_cantidad << endl;
	cout << "C) La cantidad de participantes son: " << pc_cantidad << endl;
	
	return 0;
}
