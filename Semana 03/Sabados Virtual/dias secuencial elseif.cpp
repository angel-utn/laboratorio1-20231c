#include <iostream>

using namespace std;

/**
Hacer un programa que reciba un número que representa el día
y emitir por pantalla el nombre correspondiente.

Datos de entrada:
dia de la semana

Datos de salida:
nombre del dia

Operaciones:
nombre del dia = "lunes", si dia de la semana es 1
nombre del dia = "martes", si dia de la semana es 2
...
nombre del dia = "domingo", si dia de la semana es 7


*/

int main()
{
	/// declaracion
	int diaDeLaSemana;
	string nombreDelDia;
	
	/// datos de entrada
	cout << "Ingrese el numero del dia de la semana: ";
	cin >> diaDeLaSemana;
	
	/// operaciones
	if (diaDeLaSemana == 1)
	{
		nombreDelDia = "Lunes";
	}
	else if (diaDeLaSemana == 2)
	{
		nombreDelDia = "Martes";
	}
	else if (diaDeLaSemana == 3)
	{
		nombreDelDia = "Miercoles";
	}
	else if (diaDeLaSemana == 4)
	{
		nombreDelDia = "Jueves";
	}
	else if (diaDeLaSemana == 5)
	{
		nombreDelDia = "Viernes";
	}
	else if (diaDeLaSemana == 6)
	{
		nombreDelDia = "Sabado";
	}
	else 
	{
		nombreDelDia = "Domingo";
	}
	
	/// datos de salida
	cout << "El dia es " << nombreDelDia << endl;
	
	return 0;
}
