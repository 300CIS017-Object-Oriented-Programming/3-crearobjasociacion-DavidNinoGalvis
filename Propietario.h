//
// Created by lufe y Gonzo Feb2024.
// Estudiante: David Nino Galvis
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

using namespace std;

#include <string>

class Propietario {
private:
    string nombre;
    int docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre);
    Propietario(string nombre, int docIdentidad);
    void mostrarInfo();
    string getNombre();
    void setNombre(string nombre);
    void setEdad(int edad);
    void setDocIdentidad(int id);
/* El método agregarPropietario crea un nuevo objeto de la clase Propietario con los parámetros proporcionados (nombre y documento de identidad) y 
lo asocia al objeto Perro asignándolo a la variable de instancia pPropietario.*/
};


#endif //PROPIETARIO_H
