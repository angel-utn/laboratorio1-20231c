#include <iostream>
using namespace std;
#include "matematica.h"

int main()
{
   int n1, n2, resultado;
   float resultadoDivision;
   string nombre;

   cout << "Ingresa tu nombre: ";
   cin >> nombre;
   saludar(nombre);

   cout << "Ingresa dos nros enteros: ";
   cin >> n1;
   cin >> n2;

   resultado = sumar(n1, n2);
   cout << "El resultado de la suma es: " << resultado << endl;

   resultadoDivision = dividir(n1, n2);
   cout << "El resultado de la división es: " << resultadoDivision << endl;

   resultadoDivision = dividir(n2, n1);
   cout << "El resultado de la división es: " << resultadoDivision << endl;

   return 0;
}
