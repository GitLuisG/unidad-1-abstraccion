#include "CCajero.h"

CCajero::CCajero()
{

}

CCajero::~CCajero()
{

}

bool CCajero::consultar_datos(string num_tar, int nip)

{
    CConsultar consultar;
    consultar.consultar_datos_login(num_tar, nip);

    return false;
}
