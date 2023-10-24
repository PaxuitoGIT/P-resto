#include <iostream>
#include <string>
#include "variables.h"

int main () {
    std::string nombre;
    int edad;

    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;

    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "Hola, " << nombre << "! Tienes " << edad << " anios.\n";

    variablelocal();
    std::cout << "Variable global desde main: " << variableglobal <<std::endl;

    if (true) {
        int variablelocal = 80;
        std::cout << "Variable local dentro del if: " << variablelocal << std::endl;
    }

        int entero = 532;
        double decimal = 5.123;
        char caracter = 'a';
        bool booleano = true;

        std::cout << "Entero: " << entero << std::endl;
        std::cout << "Decimal: " << decimal << std::endl;
        std::cout << "Caracter: " << caracter << std::endl;
        std::cout << "Booleano: " << booleano << std::endl;

    return 0;
}