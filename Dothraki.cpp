#include "Dothraki.h"

using namespace std;

Dothraki::Dothraki()
{
}

Dothraki::~Dothraki()
{
}

//getter

string Dothraki::getNombre()
{
	return nombre;
}

string Dothraki::getJefeBarbaro()
{
	return jefeBarbaro;
}

string Dothraki::getNombreCaballo()
{
	return nombreCaballo;
}

string Dothraki::getColorCaballo()
{
	return colorCaballo;
}

double Dothraki::getAtaque()
{
	return ataque;
}

double Dothraki::getDefensa()
{
	return defensa;
}

//setter

void Dothraki::setNombre(string n)
{
	nombre = n;
}

void Dothraki::setJefeBarbaro(string b)
{
	jefeBarbaro = b;
}

void Dothraki::setNombreCaballo(string nc)
{
	nombreCaballo = nc;
}

void Dothraki::setColorCaballo(string cc)
{
	colorCaballo = cc;
}

void Dothraki::setAtaque(double a)
{
	ataque = a;
}

void Dothraki::setDefensa(double d)
{
	defensa = d;
}
