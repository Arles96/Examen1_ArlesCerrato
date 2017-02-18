#include "Lannister.h"

using namespace std;

Lannister::Lannister()
{
}

Lannister::~Lannister()
{
	cout<<"Eliminando el objeto " << this << endl;
	for (int i=0; i<guardias.size();i++){
		delete guardias[i];
	}
	guardias.clear();
}

//guetter

string Lannister::getJefeFamilia()
{
	return jefeFamilia;
}

string Lannister::getAnimalEmblema()
{
	return animalEmblema;
}

string Lannister::getLema()
{
	return lema;
}

GuardiaReal* Lannister::getGuardiaReal(int i)
{
	return guardias[i];
}

double Lannister::getDinero()
{
	return dinero;
}

int Lannister::getFuerzaMontana()
{
	return fuerzaMontana;
}

int Lannister::getCantidadIntegrantes()
{
	return cantidadIntegrantes;
}

int Lannister::getCantidadGuardias()
{
	return guardias.size();
}

//setter

void Lannister::setJefeFamilia(string f)
{
	jefeFamilia = f;
}

void Lannister::setAnimalEmblema(string e)
{
	animalEmblema= e;
}

void Lannister::setLema(string l)
{
	lema = l;
}

void Lannister::addGuardiaReal(GuardiaReal* g)
{
	guardias.push_back(g);
}

void Lannister::setDinero(double d)
{
	dinero = d;
}

void Lannister::setFuerzaMontana(int m)
{
	fuerzaMontana = m;
}

void Lannister::setCantidadIntegrantes(int i)
{
	cantidadIntegrantes = i;
}

void Lannister::EliminarGuardia(int i)
{
	guardias.erase(guardias.begin()+i);
}
