#include <iostream>

using namespace std;

int main()
{
	int i,j, codigoDestino, mes, cantidadPasajes, totalPasajes=0;
	float recaudacion, totalRecaudacion;
	for(i=0; i<5; i++)
	{
		totalRecaudacion =0;
		cout << "Grupo:" <<endl;
		for(j=0; j<12; j++)
		{
			cout << "Codigo destino:" <<endl;
			cin >> codigoDestino;
			cout << "Mes:" <<endl;
			cin >> mes;
			cout << "Cantidad pasajes:" <<endl;
			cin >> cantidadPasajes;
			cout << "Recaudacion:" <<endl;
			cin >> recaudacion;
			
			totalPasajes+=cantidadPasajes;
			totalRecaudacion+=recaudacion;
			
		}
		cout <<"Recaudacion de ese grupo: " << totalRecaudacion << endl;
	}
	
	cout <<"Total de pasajes vendidos: " << totalPasajes << endl;
	
	return 0;
}
