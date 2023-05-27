/**
  Ingresar apellido y nombres de 5 personas y también su edad.
  Mostrar luego, los datos ingresados en forma de oración.
*/

#include <iostream>
using namespace std;
#include <string>

int main()
{
    int i;
    string apenom[5];
    int edades[5];

    for(i=0; i<5; i++){
      cout << "Ingresar los datos del la persona #" << i+1 << ": " << endl;
      cout << "Apellido y nombres: ";
      getline(cin, apenom[i]);

      cout << "Edad: ";
      cin >> edades[i]; //Enter
      cin.ignore();
    }
    cout << endl;
    for(i=0; i<5; i++){

      cout << apenom[i] << " tiene " << edades[i] << " años." << endl;

    }


    return 0;
}
