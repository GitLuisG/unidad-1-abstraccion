#include "CConsultar.h"

CConsultar::CConsultar()
{
    // aquì se pùede cambiar por un conector a la base de datos
}

CConsultar::~CConsultar()
{

}

bool CConsultar::consultar_datos_login( string nt, int n)
{
    ifstream ifs;
    string line;
    vector<string> datos_usuario;
    bool ban= false;

    ifs.open("data_login.txt", ifstream::in);

    while(getline(ifs, line))
    {
        datos_usuario = obten_datos(line);

        if (nt.compare(datos_usuario[0]) == 0 && n == atoi(datos_usuario[1].c_str()))
        {
            ban = true;
            break;
        }
    }

    ifs.close();
    return ban;
}

vector<string> CConsultar::obten_datos(string l)
{
    vector<string> datos_usuario;
    string delimiter = ",";

    size_t pos = 0;
    string token;

    while ((pos = l.find(delimiter)) != std::string::npos) {
        token = l.substr(0, pos);
        cout << "token: " << token << endl;
        datos_usuario.push_back(token);
        l.erase(0, pos + delimiter.length());
    }
    datos_usuario.push_back(l);

    return datos_usuario;
}
