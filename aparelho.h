//
// Created by Paulo Gala on 21/11/2023.
//

#ifndef TP_POO_APARELHO_H
#define TP_POO_APARELHO_H
#include <string>

namespace apar {
    const std::string tipo[] = {"aquecedor",
                                "aspersor",
                                "refrigerador",
                                "lampada"};
    const char abv[] = {'a', 's','r','l'};
    class aparelho {
    public:
        std::string aID;
        aparelho(char l); // construtor tem de incluir o tipo de aparelho
        virtual ~aparelho();

        const std::string &getNome() const;

    private:
        int id;
        static int aparID;
        std::string nome;
        char letra = 'n'; // 'n' - não atribuído
    };

} // apar

#endif //TP_POO_APARELHO_H
