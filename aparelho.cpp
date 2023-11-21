//
// Created by Paulo Gala on 21/11/2023.
//

#include "aparelho.h"
#include <iostream> // só para finalidade de testes. Tirar antes de conclusão

namespace apar {
    aparelho::aparelho(char l){
        for(int i = 0; i < 4; i++){
            if(l == abv[i]){
                aparelho::letra = abv[i];
                aparelho::nome = tipo[i];
                break; // sai do for
            }
        }
        if(aparelho::letra == 'n'){
            std::cout << "Nao inseriu um tipo valido de aparelho" << std::endl; // só para teste
            return;
        }
        aparelho::id = ++aparID; // começa no '1' e não no '0', já que as static estão a ser inicializadas a zero
        aparelho::aID = "a"; // prefixo indicativo do tipo de componente
        aparelho::aID += std::to_string(id); // o aID vai ser constituido pelo prefixo e numeração única à classe
    }

    aparelho::~aparelho(){

    }

    const std::string &apar::aparelho::getNome() const {
        return nome;
    }
} // apar