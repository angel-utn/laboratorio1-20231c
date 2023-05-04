#include <iostream>

using namespace std;

int main(){
    int n, cantidad;

    cantidad = 0;

    cout << "Ingrese numero: ";
    cin >> n;

    while(n >= 0){
            if(n>0){
                cantidad++;

            }

        cout << "Ingrese numero: ";
        cin >> n;
    }


    cout << "Catidad de numeros : " << cantidad;


    return 0;
}
