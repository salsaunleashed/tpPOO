//
// Created by ajord on 16/11/2023.
//

#include <iostream>
#include "curses.h"
#include "home.h"
#include "zone.h"

Zone::Zone(int zone_num, std::string zone_name) : zone_num(zone_num), zone_name(zone_name){

}

int Zone::getNumero() const {
    return zone_num;
}

void Zone::showZoneInfo() const {
    std::cout << "Zona " << zone_num << "    " << zone_name << "   |";

}// zone