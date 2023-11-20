// POO 23/24
// Biblioteca para manipulação da consola
//
// Uso fora do âmbito de POO -> Perguntar primeiro aos professores
// Depósito em repositórios públicos -> Perguntar primeiro aos professores
//
// Pode ser aumentada com funcionalidades novas (desde que funcionem)

#include <string>
#include "curses.h"
#include "home.h"
#include "Terminal.h"

using namespace term;

int main() {

    Terminal &t = Terminal::instance();
    Home h = Home(3, 3);

    h.addZone(1, 2, 1, "quarto");
    h.addZone(0, 2, 0, "sala");
    h.addZone(2, 1, 2, "wc");

    t << move_to(10, 10) << set_color(2) << "Grelha" << h.showHome();
    refresh();
    t.getchar();

    return 0;
}