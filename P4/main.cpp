#include <iostream>
#include "funciones.h"
#include "matematicas.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    std::cout << "¡Hola CLion!" << std::endl;
    int a = 5, b = 3;
    int resultado_suma = suma(a, b);
    int resultado_resta = resta(a, b);
    int resultado_multiplicacion = multiplicacion(a, b);
    int resultado_division = division(a, b);

    double radio = 5;
    double area = AREA_CIRCULO(radio);


    std::cout << "Resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "Resultado de la resta: " << resultado_resta << std::endl;
    std::cout << "Resultado de la multiplicacion: " << resultado_multiplicacion << std::endl;
    std::cout << "Resultado de la division: " << resultado_division << std::endl;
    std::cout << "Area del circulo: "<< area << std::endl;

    return 0;
}