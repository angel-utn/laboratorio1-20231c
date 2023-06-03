#include <iostream>

using namespace std;

//int sumar(int, int);
int sumar(int numero1, int numero2);

void pedirNumeros(int &n1, int &n2);

//sumarYMostrar recibe dos parámetros por valor
void sumarYMostrar(int n1, int n2){
  int sum;
  sum = n1 + n2;
  cout << "La suma de: " << n1 << " y de: " << n2 << " es: " << sum << endl;
}

int main()
{
	int num1, num2, suma;
	//valores hardcodeados
	num1 = 8;
	num2 = 10;

	suma = sumar(num1, num2);

	cout << "La suma de: " << num1 << " y de: " << num2 << " es: " << suma << endl;

	pedirNumeros(num1, num2);

	sumarYMostrar(num1, num2);

	cout << sumar(num1, num2) << endl;

	return 0;
}

//sumar recibe dos parámetros por valor
int sumar(int n1, int n2){
  int sum;
  sum = n1 + n2;

  return sum;
}

//pedirNumeros recibe dos parámetros por referencia
void pedirNumeros(int &n1, int &n2){
  //Visualizo los valores de n1 y n2 antes de modificarlos:
  //cout << "n1: " << n1 << endl;
  //cout << "n2: " << n2 << endl;

  cout << "Ingrese primer numero: ";
  cin >> n1;
  cout << "Ingrese segundo numero: ";
  cin >> n2;
}
