#ifndef CCUADRADO_H
#define CCUADRADO_H

#include <iostream>

using namespace std;


class CCuadrado
{
    public:
        CCuadrado();
        CCuadrado(int);

        int get_lado();
        void set_lado(int);

        int get_area();
        int get_perimetro();

        virtual ~CCuadrado();

    protected:

    private:
        int lado;
        int perimetro;
        int area;

        void calucula_area();
        void calcula_perimetro();
};

#endif // CCUADRADO_H
