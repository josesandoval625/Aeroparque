#pragma once
#include<iostream>
#include<string>
#include<stdlib.h>
#include<sstream>
#include"Fecha.h"
using namespace std;

class Pasajero
{
private:
	string DniDelPasajero;
	string NombreDelPasajero;
	string ApellidoDelPasajero;
	string GeneroDelPasajero;
	int EdadDelPasajero;
	Fecha FechaDelPasajero;
	string NumeroDeVuelo;
	int NumeroDeAsiento;
	//ListaDeValijas Valijas;
	void AgregarEquipaje(/*ListaDeValijas*/);
	int getDniPasajero();
	string getNombreDelPasajero();
	string getApellidoDelPasajero();
	string getGeneroDelPasajero();
	int getEdadDelPasajero();
	void setDniPasajero();
	void setNombreDelPasajero();
	void setApellidoDelPasajero();
	void setGeneroDelPasajero();
	void setEdadDelPasajero();
	string to_string();
};

