#include <iostream>
#include "Persona.h"
#include "Estudiante.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

    Persona persona1;
    persona1.setNombre("Pepita");
    persona1.setEdad(24);
    persona1.setGenero("Mujer");

    std::cout << "Detalles de la persona 1:" << std::endl;
    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Genero: " << persona1.getGenero() << std::endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Binhao");
    estudiante1.setEdad(18);
    estudiante1.setGenero("Hombre");
    estudiante1.setGrado("Ingenieria informatica");

    std::cout << "Detalles del estudiante 1:" << std::endl;

    estudiante1.mostrarDetalles();

    return 0;
}



