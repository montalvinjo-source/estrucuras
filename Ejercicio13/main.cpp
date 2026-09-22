#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

int main() {
    srand(time(NULL));
    
    // Rango de edades de 18 a 27 inclusive (10 edades distintas)
    int edades[10] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    
    // Desordenar las edades aleatoriamente para que se asignen sin repetir
    for (int i = 0; i < 10; i++) {
        int r = rand() % 10;
        int temp = edades[i];
        edades[i] = edades[r];
        edades[r] = temp;
    }

    Persona* personas[10];

    for (int i = 0; i < 10; i++) {
        personas[i] = new Persona(edades[i]);
    }

    std::cout << "--- Lista de Personas Creadas ---" << std::endl;
    for (int i = 0; i < 10; i++) {
        personas[i]->mostrar();
    }

    // Liberar memoria dinámica
    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}