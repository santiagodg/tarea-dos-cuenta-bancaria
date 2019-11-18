#include <string>
#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

int main()
{
	string sPropietario;
	double dSaldo, dCantidad;
	int iOpcion;
	bool bContinuar;

	cout << "#### #### #### Cuenta Bancaria #### #### ####" << endl;
	cout << endl;

	// Deberás pedir el propietario y saldo de una sola CuentaBancaria.
	cout << "Ingresa el propietario: ";
	cin >> sPropietario;

	cout << "Ingresa el saldo: ";
	cin >> dSaldo;

	cout << "Gracias!" << endl;
	cout << endl;

	/* Después crearás un objeto de tipo CuentaBancaria con los datos
	 * proporcionados. */
	CuentaBancaria cuentaBancaria1(sPropietario, dSaldo);

	/* Desplegar un MENU con las siguientes opciones:
	* a) Depositar //Pide al usuario el monto a depositar y lo deposita en la
	*    cuenta
	* b) Retirar //Pide al usuario el monto a retirar y lo intenta retirar de
	*    la cuenta. Mostrar un mensaje de "Exito" si el retiro se efectuó
	*    correctamente, "Fondos insuficientes" de lo contrario.
	* c) Datos de la cuenta //Imprime los datos de la cuenta
	* d) Terminar el programa //Termina el programa */
	do
	{
		bContinuar = true;
		cout << endl;
		cout << "#### #### Movimientos / Detalles #### ####" << endl;
		cout << endl;
		cout << "(1) Depositar" << endl;
		cout << "(2) Retirar" << endl;
		cout << "(3) Datos de la cuenta" << endl;
		cout << "(4) Terminar el programa" << endl;
		cout << "Ingrese una opción (1-4): ";
		cin >> iOpcion;

		while (iOpcion < 1 || 4 < iOpcion)
		{
			cout << "Opción debe ser entre 1 y 4: ";
			cin >> iOpcion;
		}

		cout << endl;

		switch (iOpcion)
		{
		case 1:
			cout << "Ingrese el monto a depositar: ";
			cin >> dCantidad;
			cuentaBancaria1.deposita(dCantidad);
			cout << "Exito!" << endl;
			break;
		case 2:
			cout << "Ingrese el monto a retirar: ";
			cin >> dCantidad;
			if (cuentaBancaria1.retirar(dCantidad))
			{
				cout << "Exito!" << endl;
			}
			else
			{
				cout << "Fondos insuficientes." << endl;
			}
			break;
		case 3:
			cuentaBancaria1.toString();
			break;
		case 4:
			cout << "Adios!" << endl;
			bContinuar = false;
			break;
		}

		system("pause");

		cout << endl;
	} while (bContinuar);

	return 0;
}