#pragma once
#include<iostream>
#include<string>
#include<stdlib.h>
#include<sstream>
#include"Fecha.h"
#include"ListaDeValijasDelPasajero.h"
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
	ListaDeValijasDelPasajero *ListaValijas;
public:
	Pasajero(string,string,string,string,int,Fecha,string,int);
	Pasajero(const Pasajero&);
	Pasajero& operator=(const Pasajero&);
	~Pasajero();
	string getDniPasajero()const;
	string getNombreDelPasajero()const;
	string getApellidoDelPasajero()const;
	string getGeneroDelPasajero()const;
	int getEdadDelPasajero()const;
	void setDniPasajero(const string& dniPasajero);
	void setNombreDelPasajero(const string& nombreDelPasajero);
	void setApellidoDelPasajero(const string& ApellidoDelPasajero);
	void setGeneroDelPasajero(const string& GeneroDelPasajero);
	void setEdadDelPasajero(const string& setEdadDelPasajero);
	string to_string();
	void AgregarEquipaje(/*ListaDeValijas*/);
};

