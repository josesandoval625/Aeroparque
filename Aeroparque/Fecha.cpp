#include "Fecha.h"

Fecha::Fecha()
{
}

Fecha::Fecha(int dia, Dia _dia, Mes _mes, int anio)
	:DiaNumero(dia), DiaNombre(_dia), MesDelAnio(_mes), Anio(anio)
{
}

Fecha::~Fecha()
{
}

int Fecha::getDiaNumero() const
{
	return this->DiaNumero;
}

string Fecha::getDiaNombre() const
{
	switch (DiaNombre)
	{
	case Dia::LUNES:
		return "LUNES";
	case Dia::MARTES:
		return "MARTES";
	case Dia::MIERCOLES:
		return "MIERCOLES";
	case Dia::JUEVES:
		return "JUEVES";
	case Dia::VIERNES:
		return "VIERNES";
	case Dia::SABADO:
		return "SABADO";
	case Dia::DOMINGO:
		return "DOMINGO";
	default:
		return "ERROR";
		break;
	}
}

string Fecha::getMesDelAnio() const
{
	switch (MesDelAnio)
	{
	case Mes::ENERO:
		return "ENERO";
		break;
	case Mes::FEBRERO:
		return "FEBRERO";
		break;
	case Mes::MARZO:
		return "MARZO";
		break;
	case Mes::ABRIL:
		return "ABRIL";
		break;
	case Mes::MAYO:
		return "MAYO";
		break;
	case Mes::JUNIO:
		return "JUNIO";
		break;
	case Mes::JULIO:
		return "JULIO";
		break;
	case Mes::AGOSTO:
		return "AGOSTO";
		break;
	case Mes::SEPTIEMBRE:
		return "SEPTIEMBRE";
		break;
	case Mes::OCTUBRE:
		return "OCTUBRE";
		break;
	case Mes::NOVIEMBRE:
		return "NOVIEMBRE";
		break;
	case Mes::DICIEMBRE:
		return "DICIEMBRE";
		break;
	default:
		return "ERROR";
		break;
	}
}

int Fecha::getAnio() const
{
	return this->Anio;
}

void Fecha::setDiaNumero(const int& dia)
{
	this->DiaNumero = dia;
}

void Fecha::setDiaNombre(const Dia& dia)
{
	this->DiaNombre = dia;
}

void Fecha::setMesDelAnio(const Mes& mes)
{
	this->MesDelAnio = mes;
}

void Fecha::setAnio(const int& anio)
{
	this->Anio = anio;
}

string Fecha::getData()
{
	return "\n" + this->getDiaNombre() + " , " + to_string(this->DiaNumero) + " de " + this->getMesDelAnio() + " " + to_string(this->Anio) + "\n";
}
