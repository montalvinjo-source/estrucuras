#include "Persona.hpp"

Persona::Persona(int edad) {
    this->edad = edad;
    this->genero = rand() % 2; // Asignación automática de género (0 o 1)

    // Generación automática de un DNI aleatorio de 8 dígitos + letra
    int numDNI = 10000000 + rand() % 90000000;
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[numDNI % 23];
    
    snprintf(this->dni, sizeof(this->dni), "%08d%c", numDNI, letra);
}

Persona::~Persona() {}

int Persona::getEdad() {
    return edad;
}

bool Persona::esMujer() {
    return genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() {
    std::cout << "DNI: " << dni 
              << " | Edad: " << edad 
              << " | Genero: " << (genero ? "Mujer" : "Hombre") 
              << std::endl;
}