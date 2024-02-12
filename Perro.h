//
// Created by lufe0 y Gonzo Feb2024.
// Estudiante: David Nino
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Raza.h"

using namespace std;

class Veterinario {
private:
    string nombre;
    int aniosExperiencia;

public:
    Veterinario(string nombre, int aniosExperiencia) : nombre(nombre), aniosExperiencia(aniosExperiencia) {}

    string getNombre() const {
        return nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    int getAniosExperiencia() const {
        return aniosExperiencia;
    }

    void setAniosExperiencia(int aniosExperiencia) {
        this->aniosExperiencia = aniosExperiencia;
    }
};


class Perro {
private:
    int edad;
   string nombre;
   string raza;
   string tamanio;
   string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;

public:
    Perro();
    Perro(string nombre, int edad, string raza, string color, string tamanio);
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    // Sirve para.......
    void agregarPropietario(string nombre,int docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
    string getRaza();
    void setRaza(string raza);
   string getNombre();
    void setNombre(string nombre);
   string getTamanio();
    void setTamanio(string tamanio);
   string getColor();
    void setColor(string color);
    // Metodos Nuevos al agregar la clase veterinario
    void asignarVeterinario(Veterinario* veterinario);
    Veterinario* getVeterinario();
    // Metodos nuevos al agregar la clase Raza
    Raza* getRazaClass();
    void asignarRaza(Raza* raza);

};
#endif
