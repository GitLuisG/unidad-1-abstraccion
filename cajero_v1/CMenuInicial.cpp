#include "CMenuInicial.h"

CMenuInicial::CMenuInicial()
{

}

CMenuInicial::~CMenuInicial()
{

}

int CMenuInicial::menu()
{
	short int opc = 0;
	do {
	cout << " ================================================" << endl;
	cout << " ======== BIENVENIDO INSERTE SU TARJETA =========" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t oprima 1 para retiro sin tarjeta\n" << endl;
	cin >> opc;
	cout << " ================================================" << endl;
	} while (opc != 1);

	return opc;
}
