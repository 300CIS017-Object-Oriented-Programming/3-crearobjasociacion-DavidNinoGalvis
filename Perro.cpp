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

Perro::Perro(string nombre, int edad, string raza, string color, string tamanio)
    : nombre(nombre), edad(edad), raza(raza), color(color), tamanio(tamanio) {
}

void Perro::ladrar() {
    cout << "Guau Guau" << endl;
}

void Perro::agregarPropietario(string nombre, int docIdentidad) {
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

// Metodos nuevos al agregar la clase veterinario

void Perro::asignarVeterinario(Veterinario* veterinario) {
    this->pVeterinario = veterinario;
}

Veterinario* Perro::getVeterinario() {
    return pVeterinario;
}

// Metodos nuevos al agregar la clase raza
void Perro::asignarRaza(Raza* raza) {
    this->pRaza = raza;
}

Raza* Perro::getRazaClass() {
    return pRaza;
}

