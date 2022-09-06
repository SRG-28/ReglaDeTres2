#pragma once
#include "Camion.h"

//constructor conjunto, tiene el constructor predeterminado y el con parámetros
Camion::Camion(string placa, string marca, string color, int modelo, Chofer* chofer)
	:placa(placa), marca(marca), color(color), modelo(0), chofer(chofer)
{
}

//constructor copia
Camion::Camion(const Camion& camion)
{
	this->placa = camion.placa;
	this->marca = camion.marca;
	this->color = camion.color;
	this->modelo = camion.modelo;
	if (camion.chofer != NULL) {//quiere decir que el cam viene con chofer
		Chofer* chofer = new Chofer(camion.chofer->getCedula(), camion.chofer->getNombre(), camion.chofer->getApellido1(), camion.chofer->getCorreoE());
	}
	else {
		chofer = NULL;

	}
}

Camion::~Camion()
{
	if (chofer != NULL) {//Hay un chofer asociado
		delete chofer;//lo eliminamos
	}
}

//Yo tengo que asignarle al camion1= camion2
//Porque camion2 trae su información

Camion& Camion::operator=(const Camion& cam2)
{
	//pasa toda la información de un objeto que existe
	//a otro objeto que existe también
	this->placa = cam2.placa;
	this->marca = cam2.marca;
	this->color = cam2.color;
	this->modelo = cam2.modelo;
	//se elimina al chofer del camion1
	if (chofer != NULL) {//quiere decir obj caminon izq tiene un chofer, lo 1ro es eliminarlo
		delete chofer; //eliminamos el que hay para copiar el que viene de la derecha o sea de can2
	}
	if (cam2.chofer != NULL) {
		//if (cam2.chofer != NULL) {//quiere decir que el cam viene con chofer{ //no es necesario
		Chofer* chofer = new Chofer(cam2.chofer->getCedula(), cam2.chofer->getNombre(), cam2.chofer->getApellido1(), cam2.chofer->getCorreoE());
		//}
	}
	return *this;
}

void Camion::setPlaca(string placa)
{
	this->placa = placa;
}

void Camion::setMarca(string)
{
}

void Camion::setColor(string)
{
}

void Camion::setModelo(int)
{
}

void Camion::setChofer(Chofer*)
{
}

string Camion::getPlaca(string)
{
	return string();
}

string Camion::getMarca(string)
{
	return string();
}

string Camion::getColor(string)
{
	return string();
}

int Camion::getModelo(int)
{
	return 0;
}

Chofer* Camion::getChofer()
{
	return nullptr;
}

string Camion::toString() const
{
	stringstream a;
	a << "Placa" << placa << endl
		<< "Marca" << marca << endl
		<< "Color" << color << endl
		<< "Modelo" << modelo << endl;
	if (chofer != NULL) {
		a << "----------------------Chofer----------------------" << endl
			<< chofer->toString();
	}
	return a.str();
}
