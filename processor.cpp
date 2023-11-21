//
// Created by ajord on 16/11/2023.
//

#include "processor.h"
#include <sstream>


namespace proc {

    processor::processor(){
        processor::id = ++procID; // começa no '1' e não no '0', já que as static estão a ser inicializadas a zero
        processor::pID = "p"; // prefixo indicativo do tipo de componente
        processor::pID += std::to_string(id); // o pID vai ser constituido pelo prefixo e numeração única à classe
    }

    processor::~processor() {

    }
} // proc