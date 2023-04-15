#include <iostream>
using namespace std;

/// Leer el enunciado
/**
	Hacer un programa para ingresar por teclado dos números 
	y luego informar por pantalla la diferencia absoluta.
*/

/// 10 3  => 7
/// 3  10 => -7 *-1  => 7

/**
	Analizar los datos
	
	Datos de Entrada: 
		primer numero, segundo numero

	Datos de Salida:
		diferencia

	Operaciones:
		diferencia = primer numero - segundo numero

		diferencia = diferencia * -1 	=> diferencia < 0

*/

/**
	int para numeros enteros (numeros sin la coma)
	float para los reales (numeros con coma)
	char para los caracteres ( letras, simbolos, numeros, etc ) 'A', '>', '1'
	bool para los valores de verdad ( verdadero (true) y falso (false))
	string para los valores alfanumericos (textos) "hola mundo"
*/

/**
	PascalCase  -- Nombres de Clase (LAB2)
	camelCase   -- nombres de variables y funciones
	UPPERCASE   -- nombre de las constantes
	lowercase   -- nombres de variables y funciones
	snake_case  -- nombres de variables y funciones
*/


/**
diferencia = diferencia * (-1);
diferencia = -diferencia;
diferencia *= -1;
*/

int main() {
	/// declaracion
	/**
		TIPO nombre;
	*/
	float primerNumero;
	float segundoNumero;
	float diferencia;
	
	/// datos de entrada
	cout << "Ingrese primer numero: ";
	cin >> primerNumero;
	
	cout << "Ingrese segundo numero: ";
	cin >> segundoNumero;	
	
	/// operaciones
	diferencia = primerNumero - segundoNumero;
	
	if(diferencia < 0){
		diferencia = diferencia * (-1);
	}
	
	/// datos de salida
	cout << "La diferencia es: " << diferencia << endl;
	
	
	return 0;
}

