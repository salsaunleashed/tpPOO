//
// Created by ajord on 16/11/2023.
//

#include <iostream>
#include <vector>
#include "home.h"
#include "curses.h"
#include "Terminal.h"

term::Terminal &t = term::Terminal::instance();

Home::Home(int line, int col) : home_lin(line), home_col(col) {
    // Garante que as dimensões da home_grid estejam dentro dos limites
    this->home_lin = std::min(std::max(this->home_lin, 2), 4);
    this->home_col = std::min(std::max(this->home_col, 2), 4);

    // Inicializa a home_grid com posições vazias
    home_grid.resize(home_lin, std::vector<Zone *>(home_col, nullptr));
}

Home::~Home() {
    // Libera a memória alocada para as zonas
    for (int i = 0; i < home_lin; ++i) {
        for (int j = 0; j < home_col; ++j) {
            delete home_grid[i][j];
        }
    }
}

Home Home::showHome() {

    for (int i = 0; i < home_lin; ++i) {
        for (int j = 0; j < home_col; ++j) {
            if (home_grid[i][j] != nullptr) {
                home_grid[i][j]->showZoneInfo();
            } else {
                std::cout << "Pos vazia      |";
            }
        }
        std::cout << "\n";
    }
    return Home(home_lin, home_col);
}

bool Home::addZone(int linhas, int colunas, int zone_num, std::string zone_name) {
    // Verifica se a posição está dentro dos limites da home_grid
    if (linhas < 0 || linhas >= Home::home_lin || colunas < 0 || colunas >= home_col) {
        return false;
    }
    // Verifica se a posição está vazia
    if (Home::Home::home_grid[linhas][colunas] != nullptr) {
        return false;
    }
    // Cria uma nova zona e a adiciona à posição especificada
    Home::Home::home_grid[linhas][colunas] = new Zone(zone_num, zone_name);
    return true;
}// home