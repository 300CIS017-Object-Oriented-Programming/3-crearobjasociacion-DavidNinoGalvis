#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Perro.cpp"
#include "Propietario.cpp"

using namespace std;

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<endl;

    return 0;
}
