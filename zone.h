//
// Created by ajord on 16/11/2023.
//

#ifndef TPPOO_ZONE_H
#define TPPOO_ZONE_H

class Zone {
public:
    Zone(int zone_num, std::string zone_name);

    int getNumero() const;

    void showZoneInfo() const;

private:
    int zone_num;
    std::string zone_name;
};// zone
#endif //TPPOO_ZONE_H
