//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"

using namespace std;

class Perro {
private:
    int edad;
   string nombre;
   string raza;
   string tamanio;
   string color;
    Propietario* pPropietario;

public:
    Perro();
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    // Sirve para.......
    void agregarPropietario(std::string nombre,string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
   string getRaza();
    void setRaza(std::string raza);
   string getNombre();
    void setNombre(std::string nombre);
   string getTamanio();
    void setTamanio(std::string tamanio);
   string getColor();
    void setColor(std::string color);
};
#endif
