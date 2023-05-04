#include <iostream>

using namespace std;

int main()
{
	int i,j, codigoDestino, mes, cantidadPasajes, totalPasajes=0;
	float recaudacion, totalRecaudacion;
	for(i=0; i<2; i++)
	{
		totalRecaudacion =0;
		cout << "Grupo:" <<endl;
		cout << "Codigo destino:" <<endl;
		cin >> codigoDestino;
		cout << "Mes:" <<endl;
		cin >> mes;
		while(mes!=0)
		{
			
			cout << "Cantidad pasajes:" <<endl;
			cin >> cantidadPasajes;
			cout << "Recaudacion:" <<endl;
			cin >> recaudacion;
			
			totalPasajes+=cantidadPasajes;
			totalRecaudacion+=recaudacion;
			
			cout << "Mes:" <<endl;
			cin >> mes;
			
		}
		cout <<"Recaudacion de ese grupo: " << totalRecaudacion << endl;
	}
	
	cout <<"Total de pasajes vendidos: " << totalPasajes << endl;
	
	return 0;
}
