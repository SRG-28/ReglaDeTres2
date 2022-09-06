#pragma once
#include<iostream>
#include<sstream>
using namespace std;


class Chofer {
private:
	string cedula;
	string nombre;
	string apellido1;
	string correoE;
public:
	Chofer(string = " ", string = " ", string = " ", string = " ");
	virtual~Chofer();

	//set´s
	void setNombre(string nombre);
	void setApellido1(string apellido1);
	void setCedula(string cedula);
	void setCorreoE(string correoE);

	//get's
	string getNombre();
	string getApellido1();
	string getCedula();
	string getCorreoE();

	string toString()const;

};


