#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"
#include "Perro.cpp"
#include "Propietario.cpp"
#include "Raza.cpp"

using namespace std;

int main() {

    // Instanciar
    Perro lunita;
    lunita.setNombre("lunita");
    lunita.setColor("Negro");
    lunita.setEdad(5);
    lunita.setTamanio("Grande");
    lunita.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a lunita
    lunita.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro lunita
    cout << "El nombre del pPropietario del perro " << lunita.getNombre() << " es " << lunita.getPropietario()->getNombre() << endl;

    // Crear objeto de la clase Perro con constructor de parámetros utilizando new
    Perro* firulais = new Perro("Firulais", 5, "Mastin napolitano", "Negro", "Grande");

    // Llamar al método ladrar del objeto creado
    firulais->ladrar();

    // Crear objeto de la clase Propietario con constructor de un solo parámetro utilizando new
    Propietario* propietario1 = new Propietario("David Nino");

    // Usar sets para definir el resto de los atributos
    propietario1->setDocIdentidad(1114874514);
    propietario1->setEdad(30);

    // Imprimir información del propietario usando el método mostrarInfo
    propietario1->mostrarInfo();
    cout << "El nombre del pPropietario del perro " << firulais->getNombre() << " es " << firulais->getPropietario()->getNombre() << endl;

    // Liberar memoria del objeto creado con new
    delete firulais;
    delete propietario1;

    return 0;
}
