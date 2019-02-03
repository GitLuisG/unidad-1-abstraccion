#include <iostream>
#include "CCuadrado.h"

using namespace std;

int main()
{
    CCuadrado c1(2);
    CCuadrado c2;

    cout << c1.get_area() << endl;
    cout << c2.get_area() << endl;
    return 0;
}
