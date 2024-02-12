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
    lunita.agregarPropietario("Carlos Zapata", 102842313);
    cout << "El nombre del pPropietario del perro " << lunita.getNombre() << " es " << lunita.getPropietario()->getNombre() << endl;

    Perro* firulais = new Perro("Firulais", 5, "Mastin napolitano", "Negro", "Grande");

    Raza* mastinNapolitano = new Raza("Mastin Napolitano", "Italia");

    firulais->asignarRaza(mastinNapolitano);

    firulais->ladrar();

    Propietario* propietario1 = new Propietario("David Nino");

    propietario1->setDocIdentidad(1114874514);
    propietario1->setEdad(30);

    propietario1->mostrarInfo();

    cout << "Nombre de Firulais: " << firulais->getNombre() << endl;
    cout << "Raza de Firulais: " << firulais->getRazaClass()->getNombre() << endl;
    cout << "País de origen de la raza de Firulais: " << firulais->getRazaClass()->getPaisOrigen() << endl;

    delete lunita.getPropietario();
    delete firulais->getRazaClass();
    delete firulais;
    delete propietario1;

    return 0;
}
