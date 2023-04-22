/*
El famoso influencer Santi Laratea decidió hacer una colecta de dinero para pagar la deuda de 550000 de
una institución.
Para ello le pidió a sus seguidores que donen el dinero que les sea posible.
Utilizó un sistema que aceptaba donaciones de dinero hasta que se cubriera el monto de la deuda.

Hacer un programa que emule dicho sistema. El programa debe indicar la cantidad de donaciones que se
registraron hasta cubrir el monto de la deuda.
*/

#include <iostream>

using namespace std;

int main()
{
	const int DEUDA = 550000;
	float acuRecaudacion = 0, donacion;
	int contDonaciones = 0;

	while(acuRecaudacion < DEUDA){       //mientras... la condición sea true
      cout << "Ingrese donacion: $";
      cin >> donacion;

      acuRecaudacion += donacion;

      if(donacion > 0){
        contDonaciones++;
      }

      //cout << "Recaudacion parcial: $" << acuRecaudacion << endl;
	}

	cout << "La cantidad de donaciones necesarias fue de: " << contDonaciones << endl;

	return 0;
}
