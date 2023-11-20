//
// Created by ajord on 16/11/2023.
//

#ifndef TPPOO_HOME_H
#define TPPOO_HOME_H

#include "zone.h"
#include <vector>

class Home {
public:
    Home(int linhas, int colunas);

    ~Home();

    bool addZone(int linhas, int colunas, int home_num, std::string zone_name);

    Home showHome();

private:
    int home_lin;
    int home_col;
    std::vector<std::vector<Zone *>> home_grid;
    //std::vector < area::Zone **> home_grid;
};// home

#endif//TPPOO_HOME_H