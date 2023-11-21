//
// Created by ajord on 16/11/2023.
//

#ifndef TPPOO_SENSOR_H
#define TPPOO_SENSOR_H
#include <string>

namespace sens {

    class sensor {
    public:
        std::string sID;
        sensor();
        virtual ~sensor();
    private:
        int id;
        static int sensID;
    };//sensor

#endif
}//TPPOO_SENSOR_H
