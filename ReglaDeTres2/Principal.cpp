#pragma once
#include"Camion.h"
#include"Chofer.h"

int main() {
	cout << "-------Regla de tres ejemplo dos------------" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "---------Creación de un Choferes -----------" << endl;
	Chofer* Samuel = new Chofer("123456", "Samuel", "Apuy", "apuy@gmail.com");
	Chofer* Luis = new Chofer("234567", "Luis", "Penna", "oenna@gmail.com");
	Chofer* Carlos = new Chofer("3456789", "Carlos", "Araya", "araya@gmail.com");

	cout << "-----------Creacion de Camiones-------------" << endl;
	Camion* cam1 = new Camion;//Camion vacio
	Camion* cam2 = new Camion("ABC-201", "BMW", "Negro", 2019, NULL);
	Camion* cam3 = new Camion("KDM-972", "TOYOTA", "Blanco", 2011, Samuel);

	cout << "----Imprimir información de los camiones-----" << endl;
	cout << "Imprimiendo cam1: " << endl;
	cout << cam1->toString() << endl << endl;

	cout << "Imprimiendo cam2: " << endl;
	cout << cam2->toString() << endl << endl;

	cout << "Imprimiendo cam3: " << endl;
	cout << cam3->toString() << endl << endl;

	//Prueba de fuego
	//Creacion de cam4 con ayuda de cam3
	Camion* cam4 = new Camion(*cam3);//El parametro de constructor copia debe 
									 //ser una referencia
	cout << "Imprimiendo Cam4 " << endl;
	cout << cam3->toString() << endl << endl;


	cout << " Utilizacion de Operador de asignacion:" << endl;
	//Cuando ya hay dos obj y quiero pasar la información de un obj a otro obj(existentes)
	cout << "Se va a pasar la información de cam5 a cam1" << endl;
	*cam1 = *cam4;
	cout << "Imprimiendo Cam1 de nuevo con onformacion de cam4:" << endl;
	cout << cam1->toString() << endl << endl;
	system("pause");
	return 0;
}
