#include "FamiliasNobles.h"

using namespace std;

FamiliasNobles::FamiliasNobles()
{
	cout<<"Se ha creado un guerrero de familia noble" <<endl;
}

FamiliasNobles::~FamiliasNobles()
{
}

//getter

string FamiliasNobles::getNombre()
{
	return nombre;
}

string FamiliasNobles::getSimboloEscudo()
{
	return simboloEscudo;
}

string FamiliasNobles::getLema()
{
	return lema;
}

int FamiliasNobles::getCantidad()
{
	return cantidad;
}

double FamiliasNobles::getAtaque()
{
	return ataque;
}

double FamiliasNobles::getDefensa()
{
	return defensa;
}

//setter

void FamiliasNobles::setNombre(string n)
{
	nombre = n;
}

void FamiliasNobles::setSimboloEscudo(string s)
{
	simboloEscudo = s;
}

void FamiliasNobles::setLema(string l)
{
	lema = l;
}

void FamiliasNobles::setCantidad(int c)
{
	cantidad = c;
}

void FamiliasNobles::setAtaque(double a)
{
	ataque = a;
}

void FamiliasNobles::setDefensa(double d)
{
	defensa = d;
}
