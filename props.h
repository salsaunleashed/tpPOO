//
// Created by ajord on 16/11/2023.
//

#ifndef TPPOO_PROPS_H
#define TPPOO_PROPS_H

namespace prop {
    class props {
    public:
        
    private:
        float Temperatura; // em graus celsius. Min: -273, sem máximo,
        float Luz; // em Lúmens. Min: 0, sem máximo.
        float Radiacao; // em Becquerel. Min: 0; sem máximo
        float Vibracao; // em Hertz. Min: 0; sem máximo
        float Humidade; // em %. Min: 0; Máx: 100
        float Fumo; // em Obscuração (%). Min: 0; Máx: 100
        float Som; // em Décibeis. Min: 0; sem máximo

    };// props

#endif

}//TPPOO_PROPS_H
