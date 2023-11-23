//
// Created by ajord on 16/11/2023.
//

#ifndef TPPOO_PROCESSOR_H
#define TPPOO_PROCESSOR_H
#include <string>
#include <vector>

namespace proc {

    class processor {
    public:
        std::string pID;
        processor();
        virtual ~processor();
//        static std::vector<processor*> vecProc;

    private:
        int id;
        static int procID;

    };// proc

#endif

}//TPPOO_PROCESSOR_H