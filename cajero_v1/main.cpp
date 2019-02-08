#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

#include "CMenuInicial.h"
#include "CCajero.h"

using namespace std;

int main(void)
{
    bool ban_opc = false;
    CMenuInicial obj;
    CCajero cajero;

    string numero_tarjeta;
    int tmp_nip;
    int count_oport=1;

	// se despliega el menu inicial;
	
	do {

	switch (obj.menu()) {
		case 1:
			cout << "=== Digite su tarjeta: ";
			cin.ignore();
			getline(cin, numero_tarjeta);
            do {
                count_oport++;
                cout << "=== Digite su nip: ";
                cin >> tmp_nip;
		ban_opc = CCajero::consultar_datos(numero_tarjeta, tmp_nip);
            } while (count_oport < 4);
			ban_opc = true; 
			break;
		default:
			cout << "No existe esa opción intente de nuevo" << endl;
			break;
	}

	}while (!ban_opc);
	
	return 0;
}
