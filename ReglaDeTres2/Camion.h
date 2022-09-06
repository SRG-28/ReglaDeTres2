#pragma once
#include"Chofer.h"

class Camion {
private:
	string placa;
	string marca;
	string color;
	int modelo;
	Chofer* chofer;
public:
	Camion(string = " ", string = " ", string = " ", int = 0, Chofer* = NULL);
	Camion(const Camion&); //Constructor copia
	virtual~Camion(); //Destructor

					  //sobrecarga operador de asignación
	Camion& operator=(const Camion&); //Le asigno la info del
									  //camion de la derecha al camion de la derecha. incluso teniendo
									  //asignado un chofer obj1= obj2
									  //CUIDADO CON LA COPIA SIEMPRE

									  //SET
	void setPlaca(string);
	void setMarca(string);
	void setColor(string);
	void setModelo(int);
	void setChofer(Chofer*);


	string getPlaca(string);
	string getMarca(string);
	string getColor(string);
	int getModelo(int);
	Chofer* getChofer();

	string toString() const;

};
