#include <string>
#include <iostream>
using namespace std;

class CuentaBancaria
{
	private:
		// Atributo sPropietario (string)
		string sPropietario;

		// Atributo dSaldo (double)
		double dSaldo;

	public:
		// Constructor que recibe ambos propietario y sueldo.
		CuentaBancaria(string, double);

		/* NO ESCRIBIR CONSTRUCTOR DEFAULT. LA CUENTA SIEMPRE NECESITA UN
		 * PROPIETARIO */

		/* Método retirar que recibe como parámetro la cantidad que se desea
		 * retirar de la cuenta. Regresa un boleano en true si el dinero pudo
		 * ser retirado exitosamente. Regresa un boleano en false si la
		 * cuenta no contaba con los fondos suficientes a retirar. Actualizar
		 * el saldo al tener un retiro exitoso. */
		bool retirar(double);

		/* Método deposita que recibe como parámetro la cantidad a depositar.
		 * Este método no tiene valor de retorno pero sí actualiza el
		 * saldo. */
		void deposita(double);

		/* Método toString que imprime en pantalla los datos de la cuenta
		 * bancaria. */
		void toString();
};

CuentaBancaria::CuentaBancaria(string sPropietario, double dSaldo)
{
	this -> sPropietario = sPropietario;
	this -> dSaldo = dSaldo;
}

bool CuentaBancaria::retirar(double dCantidad)
{
	if (dSaldo - dCantidad >= 0.00)
	{
		dSaldo -= dCantidad;
		return true;
	}
	else
	{
		return false;
	}
}

void CuentaBancaria::deposita(double dCantidad)
{
	dSaldo += dCantidad;
}

void CuentaBancaria::toString()
{
	cout << "sPropietario: " << sPropietario << endl;
	cout << "dSaldo: " << dSaldo << endl;
}