#include "CCuadrado.h"

CCuadrado::CCuadrado()
{
    //ctor
    lado = 10;
}

CCuadrado::~CCuadrado()
{
    //dtor
}

CCuadrado::CCuadrado(int l)
{
    CCuadrado();
    lado = l;
}

int CCuadrado::get_lado()
{
    return lado;
}

void CCuadrado::set_lado(int l)
{
    lado = l;
}

int CCuadrado::get_area()
{
    calucula_area();
    return area;
}

int CCuadrado::get_perimetro()
{
    return perimetro;
}

void CCuadrado::calucula_area()
{
    area = lado * lado;
}

void CCuadrado::calcula_perimetro()
{
    perimetro = lado * 4;
}

