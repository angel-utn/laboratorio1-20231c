//PROBLEMA 5

#include <iostream>

using namespace std;

int main()
{
  char cod;
  string tipo;
  int cat;
  float cargoFijo, pKw;

  cout << "Ingrese codigo de tarifa: ";
  cin >> cod;

  switch(cod){
  case 'A':
  case 'a':
    tipo = "Residencial";
    cat = 1;
    cargoFijo = 500;
    pKw = 1;
  break;
  case 'B':
  case 'b':
    tipo = "Residencial";
    cat = 2;
    cargoFijo = 750;
    pKw = 1.25;
  break;
  case 'C':
  case 'c':
    tipo = "Residencial";
    cat = 3;
    cargoFijo = 600;
    pKw = 3.75;
  break;
  case 'D':
  case 'd':
    tipo = "Comercial";
    cat = 1;
    cargoFijo = 1100;
    pKw = 6;
  break;
  case 'E':
  case 'e':
    tipo = "Comercial";
    cat = 2;
    cargoFijo = 1500;
    pKw = 12.5;
  break;
  case 'F':
  case 'f':
    tipo = "Comercial";
    cat = 3;
    cargoFijo = 1800;
    pKw = 20;
  break;
  /*
  default:
    cout << "Dato invalido";
    break;
  */
  }

  /*
  cout << "Tipo: " << tipo << endl;
  cout << "Categoria: " << cat << endl;
  cout << "Cargo fijo: " << cargoFijo << endl;
  cout << "Precio: " << pKw << endl;
  */

  //SI LO QUIERO MOSTRAR CON FORMA DE TABLA:
  cout << "Tipo" << "\t\t" << "|" << "Categoria" << "\t" << "|" << "Cargo fijo" << "\t" << "|" << "Precio" << endl;
	cout << tipo << "\t" << "|" << cat << "\t\t" << "|$" << cargoFijo << "\t\t" << "|$" << pKw << endl;

	return 0;
}
