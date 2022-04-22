#include "Pasajero.h"

Pasajero::Pasajero(string dniDelPasajero, string nombreDelPasajero, string apellidoDelPasajero, string generoDelPasajero, int edadDelPasajero, Fecha* fechaDeNacimiento)
	:DniDelPasajero(dniDelPasajero),NombreDelPasajero(nombreDelPasajero),ApellidoDelPasajero(apellidoDelPasajero),GeneroDelPasajero(generoDelPasajero),EdadDelPasajero(edadDelPasajero), FechaDeNacimiento(fechaDeNacimiento)
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
	this->FechaDeNacimiento = pasajero.FechaDeNacimiento;
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
		this->FechaDeNacimiento = pasajero.FechaDeNacimiento;
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

void Pasajero::setApellidoDelPasajero(const string& apellidoDelPasajero)
{
	this->ApellidoDelPasajero = apellidoDelPasajero;
}

void Pasajero::setGeneroDelPasajero(const string& generoDelPasajero)
{
	
}

void Pasajero::setEdadDelPasajero(const int& edadDelPasajero)
{
	this->EdadDelPasajero = edadDelPasajero;
}

string Pasajero::to_string()
{
	stringstream buffer;
	buffer << "dni del pasajero............: " << DniDelPasajero << endl;
	buffer << "nombre del pasajero.........: " << NombreDelPasajero << endl;
	buffer << "apellido del pasajero.......: " << ApellidoDelPasajero << endl;
	buffer << "genero del pasajero.........: " << GeneroDelPasajero << endl;
	buffer << "edad del pasajero...........: " << EdadDelPasajero << endl;
	buffer << "fecha de nacimiento.........: " << FechaDeNacimiento->getData_dia_mes_anio();
	return buffer.str();
}

