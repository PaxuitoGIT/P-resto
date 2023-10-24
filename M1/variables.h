#ifndef M1_VARIABLES_H
#define M1_VARIABLES_H

#include <iostream>

int variableglobal = 59;

void variablelocal() {
    int variablelocal = 19;
    std::cout << "Variable local: " << variablelocal << std::endl;
    std::cout << "Variable global: " << variableglobal <<std::endl;
}


#endif //M1_VARIABLES_H
