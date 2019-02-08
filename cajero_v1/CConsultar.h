#ifndef CCONSULTAR_H
#define CCONSULTAR_H 

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

class CConsultar {
    public:
        CConsultar();
        ~CConsultar();
        bool consultar_datos_login(string, int);
    private:
        vector<string> obten_datos(string);
};

#endif
