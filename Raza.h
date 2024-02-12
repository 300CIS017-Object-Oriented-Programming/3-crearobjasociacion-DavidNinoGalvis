// Estudiante: David Nino

#ifndef RAZA_H
#define RAZA_H
#include <string>

using namespace std;

class Raza {
private:
    string nombre;
    string paisOrigen;

public:
    Raza(string nombre, string paisOrigen);
    
    string getNombre() const;
    void setNombre(string nombre);

    string getPaisOrigen() const;
    void setPaisOrigen(string paisOrigen);
};

#endif //RAZA_H
