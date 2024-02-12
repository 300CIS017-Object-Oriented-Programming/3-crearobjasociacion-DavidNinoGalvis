//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
using namespace std;

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(string nombre) : nombre(nombre) {
}

Propietario::Propietario(string nombre, int docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Propietario::setEdad(int edad){
    this->edad = edad;
}

void Propietario::setDocIdentidad(int id){
    this->docIdentidad = id;
}

void Propietario::mostrarInfo() {
    cout << "Nombre: " << this->nombre << ", Documento de Identidad: " << this->docIdentidad << ", Edad: " << this->edad;
}