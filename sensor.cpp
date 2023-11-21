//
// Created by ajord on 16/11/2023.
//

#include "sensor.h"
#include <sstream>

namespace sens{
    sensor::sensor(){
        sensor::id = ++sensID; // começa no '1' e não no '0', já que as static estão a ser inicializadas a zero
        sensor::sID = "s"; // prefixo indicativo do tipo de componente
        sensor::sID += std::to_string(id); // o sID vai ser constituido pelo prefixo e numeração única à classe
    }

    sensor::~sensor() {

    }

} // sens