#include <iostream>
using namespace std;
#include "funciones.h"

int main(){
    int tiempoEntrenamiento[50]{};
    bool mTipos[50][10]{}, vTipos[10]{};
    
    cargarDatos(tiempoEntrenamiento, mTipos, vTipos);
    
    cout << "Punto A"<<endl;
    mostrarTiempoDeEntrenamiento(tiempoEntrenamiento, 50);
    
    cout << "Punto B"<<endl;
    mostrarClienteTipos(mTipos, 50);
    
    cout << "Punto C"<<endl;
    mostrarTiposNoEntrenados(vTipos, 10);
    
    return 0;
}
