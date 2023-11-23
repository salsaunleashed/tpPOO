// POO 23/24
// Biblioteca para manipulação da consola
//
// Uso fora do âmbito de POO -> Perguntar primeiro aos professores
// Depósito em repositórios públicos -> Perguntar primeiro aos professores
//
// Pode ser aumentada com funcionalidades novas (desde que funcionem)

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "curses.h"
#include "zone.h"
#include "home.h"
#include "processor.h"
#include "sensor.h"
#include "aparelho.h"
#include "Terminal.h"

// inicialização das static int
int proc::processor::procID = 0;
int sens::sensor::sensID = 0;
int apar::aparelho::aparID = 0;

term::Terminal &t = term::Terminal::instance();
term::Window win = term::Window(5, 4, 30, 15);
Home hm = Home(3, 3);

int main() {

    hm.addZone(1, 2, 1, "quarto");
    hm.addZone(0, 2, 0, "sala");
    hm.addZone(2, 1, 2, "wc");

    std::vector<proc::processor *> vproc;
    std::vector<sens::sensor *> vsens;

    proc::processor a;
    proc::processor b;
    proc::processor c;
    proc::processor d;

    vproc.push_back(new proc::processor(a));
    vproc.push_back(new proc::processor(b));
    vproc.push_back(new proc::processor(c));
    vproc.push_back(new proc::processor(d));

    for (int i = 0; i < 4; i++) {
        t << term::move_to(49, 0) << "Processadores:";
        t << term::move_to(50, i + 1) << term::set_color(2) << "Processador com ID: " << vproc[i]->pID;
        refresh();
    }

    sens::sensor e;
    sens::sensor f;
    sens::sensor g;
    sens::sensor h;

    vsens.push_back(new sens::sensor(e));
    vsens.push_back(new sens::sensor(f));
    vsens.push_back(new sens::sensor(g));
    vsens.push_back(new sens::sensor(h));


    for (int i = 0; i < 4; i++) {
        t << term::move_to(149, 0) << "Sensores:";
        t << term::move_to(150, i + 1) << term::set_color(5) << "sensor com ID: " << vsens[i]->sID;
        refresh();
    }

    t.getchar();

    hm.showHome();

    apar::aparelho i = apar::aparelho('a');
    apar::aparelho j = apar::aparelho('s');
    apar::aparelho k = apar::aparelho('r');
    apar::aparelho l = apar::aparelho('l');
    std::cout << i.getNome() << " com ID: " << i.aID << std::endl;
    std::cout << j.getNome() << " com ID: " << j.aID << std::endl;
    std::cout << k.getNome() << " com ID: " << k.aID << std::endl;
    std::cout << l.getNome() << " com ID: " << l.aID << std::endl;
    return 0;
}