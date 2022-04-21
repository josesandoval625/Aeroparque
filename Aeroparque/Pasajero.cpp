#include "Pasajero.h"

Pasajero::Pasajero(string dniDelPasajero, string nombreDelPasajero, string apellidoDelPasajero, string generoDelPasajero, int edadDelPasajero, Fecha fechaDelPasajero, string numeroDeVuelo, int numeroDeAsiento)
	:DniDelPasajero(dniDelPasajero),NombreDelPasajero(nombreDelPasajero),ApellidoDelPasajero(apellidoDelPasajero),GeneroDelPasajero(generoDelPasajero),EdadDelPasajero(edadDelPasajero),FechaDelPasajero(fechaDelPasajero),NumeroDeVuelo(numeroDeVuelo),NumeroDeAsiento(numeroDeAsiento)
{
	ListaValijas = NULL;
}

Pasajero::Pasajero(const Pasajero& pasajero)
{
	this->DniDelPasajero = pasajero.DniDelPasajero;
	this->NombreDelPasajero = pasajero.NombreDelPasajero;
	this->ApellidoDelPasajero = pasajero.ApellidoDelPasajero;
	this->GeneroDelPasajero = pasajero.GeneroDelPasajero;
	this->EdadDelPasajero = pasajero.EdadDelPasajero;
	this->FechaDelPasajero = pasajero.FechaDelPasajero;
	this->NumeroDeVuelo = pasajero.NumeroDeVuelo;
	this->NumeroDeAsiento = pasajero.NumeroDeAsiento;
	this->ListaValijas = pasajero.ListaValijas;
}

Pasajero& Pasajero::operator=(const Pasajero& pasajero)
{
	if (this != &pasajero)
	{
		this->DniDelPasajero = pasajero.DniDelPasajero;
		this->NombreDelPasajero = pasajero.NombreDelPasajero;
		this->ApellidoDelPasajero = pasajero.ApellidoDelPasajero;
		this->GeneroDelPasajero = pasajero.GeneroDelPasajero;
		this->EdadDelPasajero = pasajero.EdadDelPasajero;
		this->FechaDelPasajero = pasajero.FechaDelPasajero;
		this->NumeroDeVuelo = pasajero.NumeroDeVuelo;
		this->NumeroDeAsiento = pasajero.NumeroDeAsiento;
		this->ListaValijas = pasajero.ListaValijas;
	}
	return *this;
	// TODO: Insertar una instrucción "return" aquí
}

Pasajero::~Pasajero()
{
}

string Pasajero::getDniPasajero()const
{
	return this->DniDelPasajero;
}

string Pasajero::getNombreDelPasajero()const
{
	return this->NombreDelPasajero;
}

string Pasajero::getApellidoDelPasajero()const
{
	return this->ApellidoDelPasajero;
}

string Pasajero::getGeneroDelPasajero()const
{
	return this->GeneroDelPasajero;
}

int Pasajero::getEdadDelPasajero()const
{
	return this->EdadDelPasajero;
}

void Pasajero::setDniPasajero(const string& dniPasajero)
{
	this->DniDelPasajero = dniPasajero;
}

void Pasajero::setNombreDelPasajero(const string& nombreDelPasajero)
{
	this->NombreDelPasajero = nombreDelPasajero;
}

