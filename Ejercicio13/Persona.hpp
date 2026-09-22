#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>

class Persona {
private:
    bool genero; // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

public:
    Persona(int edad);
    ~Persona();
    
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
};

#endif