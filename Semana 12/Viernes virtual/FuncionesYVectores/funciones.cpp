#include <iostream>

using namespace std;

//pedirNumero recibe un parámetro por referencia
void pedirNumero(int &num)
{
    //cout << num << endl;

    cout << "Ingrese un numero: ";
    cin >> num;
}

//cargarVector recibe el primer parámetro por dirección y el segundo por valor
//carga el vector con 6 valores enteros aleatorios que están en el rango de 1 a 6 (ambos inclusive)
void cargarVector(int v[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        v[i] = rand() % 6 + 1;
    }
}

//mostrarVector recibe el primer parámetro por dirección y el segundo por valor
void mostrarVector(int v[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout << v[i] << endl;
    }
}

//buscarElementoEnVector recibe el primer parámetro por dirección, el segundo parámetro por valor y el tercer parámetro por valor
bool buscarElementoEnVector(int vec[], int tam, int num)
{
    int i;
    bool esta = false;

    for(i=0; i<tam; i++)
    {
        if(num == vec[i])
        {
            esta = true;
        }
    }

    return esta;
}

int buscarPosicionEnVector(int vec[], int tam, int num)
{
    int pos = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(num == vec[i])
        {
            pos = i;
            return pos;
        }
    }

    return pos;
    //cout << "hola gente" << endl; --> esto nunca se ejecuta
//NOTA: el RETURN cumple 2 funciones: retornar un valor/terminar la ejecución de la función
//toda instrucción que esté después de un RETURN, no se ejecuta
}

//ponerEnCeroMatriz recibe el primer parámetro por dirección y el segundo por valor
void ponerEnCeroMatriz(int mat[][6], int tam){
  int i, j;

  for(i=0; i<tam; i++){
    for(j=0; j<tam; j++){
      mat[i][j] = 0;
    }
  }
}

//mostrarMatriz recibe el primer parámetro por dirección y el segundo por valor
void mostrarMatriz(int mat[][6], int tam){
  int i, j;

  for(i=0; i<tam; i++){
    for(j=0; j<tam; j++){
      cout << mat[i][j] << "\t";
    }
      cout << endl;
  }
}
