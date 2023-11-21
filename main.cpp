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
term::Window win = term::Window(5, 4, 30, 4);

int main() {

    Home Home(3, 3);

    Home.addZone(1, 2, 1, "quarto");
    Home.addZone(0, 2, 0, "sala");
    Home.addZone(2, 1, 2, "wc");

    Home.showHome();

    std::vector<proc::processor> vproc;

    proc::processor a;
    proc::processor b;
    proc::processor c;
    proc::processor d;
    std::cout << "processador a com ID: " << a.pID << std::endl;
    std::cout << "processador b com ID: " << b.pID << std::endl;
    std::cout << "processador c com ID: " << c.pID << std::endl;
    std::cout << "processador d com ID: " << d.pID << std::endl;

/*    t << term::move_to(50, 1) << "Processador a com ID: " << a.pID;
    refresh();
    t << term::move_to(50, 2) << "Processador a com ID: " << b.pID;
    refresh();
    t << term::move_to(50, 3) << "Processador a com ID: " << c.pID;
    refresh();
    t << term::move_to(50, 4) << "Processador a com ID: " << d.pID;
    refresh();
    t.getchar();*/

    for(int i = 0; i < 4; i++){
        t << term::move_to(50, i) << "Processador a com ID: " << a.pID;
        refresh();
    }

    sens::sensor e;
    sens::sensor f;
    sens::sensor g;
    sens::sensor h;
    std::cout << "sensor e com ID: " << e.sID << std::endl;
    std::cout << "sensor f com ID: " << f.sID << std::endl;
    std::cout << "sensor g com ID: " << g.sID << std::endl;
    std::cout << "sensor h com ID: " << h.sID << std::endl;

    for(int i = 0; i < 4; i++){
        t << term::move_to(50, i + 10) << "sensor e com ID: " << e.sID;
        refresh();
    }
    t.getchar();

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