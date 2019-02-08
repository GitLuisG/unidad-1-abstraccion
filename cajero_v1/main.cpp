#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

#include "CMenuInicial.h"

using namespace std;

int main(void)
{
	bool ban_opc = false;
	CMenuInicial obj;
	string numero_tarjeta;
	int tmp_nip;

	// se despliega el menu inicial;
	
	do {

	switch (obj.menu()) {
		case 1:
			cout << "=== Digite su tarjeta: ";
			cin.ignore();
			getline(cin, numero_tarjeta);
			cout << "=== Digite su nip: ";
			cin >> tmp_nip;
			cout << "numero: " << numero_tarjeta << "\tnip: " << tmp_nip << endl;
			ban_opc = true;
			break;
		default:
			cout << "No existe esa opción intente de nuevo" << endl;
			break;
	}

	}while (!ban_opc);
	
	return 0;
}
