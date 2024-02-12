#include "Perro.h"
#include <iostream>

using namespace std;

// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}

void Perro::ladrar() {
    cout << "Guau Guau" << endl;
}

void Perro::agregarPropietario(string nombre, string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(string raza) {
    this->raza = raza;
}

string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(string tamanio) {
    this->tamanio = tamanio;
}

string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(string nombre) {
    this->nombre = nombre;
}

string Perro::getColor() {
    return color;
}

void Perro::setColor(string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}




