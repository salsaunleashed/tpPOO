// POO 23/24
// Biblioteca para manipulação da consola
//
// Uso fora do âmbito de POO -> Perguntar primeiro aos professores
// Depósito em repositórios públicos -> Perguntar primeiro aos professores
//
// Pode ser aumentada com funcionalidades novas (desde que funcionem)

#include <string>
//#include "curses.h"
#include "home.h"

int main() {

    Home Home(3, 3);

    Home.addZone(1, 2, 1, "quarto");
    Home.addZone(0, 2, 0, "sala");
    Home.addZone(2, 1, 2, "wc");

    Home.showHome();

    return 0;
}