//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
using namespace std;

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(string nombre, string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}