#include<iostream>


#include"Pasajero.h"
using namespace std;

int main()
{	
	Fecha* fechaDeNacimientoPasajero1=new Fecha(28,Mes::ABRIL,1989);
	Pasajero* pasajero1=new Pasajero("94448945","luis","sandoval","masculino",32,fechaDeNacimientoPasajero1);
	cout << pasajero1->to_string();

	return 0;
}