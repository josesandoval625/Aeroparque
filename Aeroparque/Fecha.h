//#pragma once
//class Fecha
//{
//
//};
#pragma once
#include<string>
#include<sstream>
using namespace std;
enum class Dia { LIBRE=0, LUNES = 1, MARTES = 2, MIERCOLES = 3, JUEVES = 4, VIERNES = 5, SABADO = 6, DOMINGO = 7 };
enum class Mes { LIBRE=0, ENERO = 1, FEBRERO = 2, MARZO = 3, ABRIL = 4, MAYO = 5, JUNIO = 6, JULIO = 7, AGOSTO = 8, SEPTIEMBRE = 9, OCTUBRE = 10, NOVIEMBRE = 11, DICIEMBRE = 12 };
class Fecha
{
private:
	int DiaNumero;
	Dia DiaNombre;
	Mes MesDelAnio;
	int Anio;
public:
	Fecha();
	Fecha(int,Mes,int);
	Fecha(int dia, Dia _dia, Mes _mes, int anio);
	Fecha(const Fecha&);//copy constructor
	Fecha& operator=(const Fecha&);// assigement operator
	~Fecha();
	int getDiaNumero()const;
	string getDiaNombre()const;
	string getMesDelAnio()const;
	int getAnio()const;

	void setDiaNumero(const int& dia);
	void setDiaNombre(const Dia& dia);
	void setMesDelAnio(const Mes& mes);
	void setAnio(const int& anio);
	string getData();
	string getData_dia_mes_anio();
};
