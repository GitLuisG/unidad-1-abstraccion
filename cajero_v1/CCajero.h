#ifndef CCAJERO_H
#define CCAJERO_H 

#include <iostream>
#include <string>
#include "CConsultar.h"

using namespace std;

class CCajero {
    public:
        CCajero();
        ~CCajero();
        static bool consultar_datos(string, int);
    private:

};

#endif
