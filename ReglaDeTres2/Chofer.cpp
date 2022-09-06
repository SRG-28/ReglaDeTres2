#include "Chofer.h"

Chofer::Chofer(string cedula, string nombre, string apellido1, string correoE)
	:cedula(cedula), nombre(nombre), apellido1(apellido1), correoE(correoE)
{
}

Chofer::~Chofer()
{
}

void Chofer::setNombre(string nombre) { this->nombre = nombre; }
void Chofer::setApellido1(string apellido1) { this->apellido1 = apellido1; }
void Chofer::setCedula(string id) { this->cedula = cedula; }
void Chofer::setCorreoE(string usuario) { this->correoE = usuario; }


string Chofer::getNombre() { return nombre; }
string Chofer::getApellido1() { return apellido1; }
string Chofer::getCedula() { return cedula; }
string Chofer::getCorreoE() { return correoE; }


string Chofer::toString()const
{
	stringstream a;
	a << "Cédula: " << cedula << endl
		<< "Nombre:  " << nombre << endl
		<< "Apellido: " << apellido1 << endl
		<< "Correo Electronico:" << correoE << endl;

	return a.str();
}
