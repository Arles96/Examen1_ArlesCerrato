#include "GuardiaReal.h"

using namespace std;

GuardiaReal::GuardiaReal()
{
}

GuardiaReal::~GuardiaReal()
{
}

//getter

string GuardiaReal::getNombre()
{
	return nombre;
}

int GuardiaReal::getEdad()
{
	return edad;
}

string GuardiaReal::getTipoSoldado()
{
	return tipoSoldado;
}

double GuardiaReal::getAtaque()
{
	return ataque;
}

double GuardiaReal::getDefensa()
{
	return defensa;
}

//setter

void GuardiaReal::setNombre(string n)
{
	nombre = n;
}

void GuardiaReal::setEdad(int e)
{
	edad = e;
}

void GuardiaReal::setTipoSoldado()
{
	int opcion;
	cout<<"MENU DE TIPOS DE SOLDADOS" << endl;
	cout<<"1. Caballero" << endl;
	cout<<"2. Jinete" << endl;
	cout<<"3. Arquero" << endl;
	cout<<"Ingrese una opcion: " ;
	cin>>opcion;
	while (opcion<1 || opcion>3){
		cout<<"Error en la opcion" << endl;
		cout<<"Ingrese una opcion: " ;
		cin>>opcion;
	}
	if (opcion==1){
		tipoSoldado = "Caballero";
	}
	else if (opcion==2){
		tipoSoldado = "Jinete";
	}
	else if (opcion==3){
		tipoSoldado = "Arquero";
	}
}

void GuardiaReal::setAtaque(double a)
{
	ataque = a;
}

void GuardiaReal::setDefensa(double d)
{
	defensa = d;
}
