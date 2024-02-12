// Estudiante: David Nino

#include "Raza.h"

using namespace std;

Raza::Raza(string nombre, string paisOrigen) : nombre(nombre), paisOrigen(paisOrigen) {}

string Raza::getNombre() const {
    return nombre;
}

void Raza::setNombre(string nombre) {
    this->nombre = nombre;
}

string Raza::getPaisOrigen() const {
    return paisOrigen;
}

void Raza::setPaisOrigen(string paisOrigen) {
    this->paisOrigen = paisOrigen;
}
