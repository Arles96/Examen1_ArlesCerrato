#include "Starks.h"

using namespace std;

Starks::Starks()
{
}

Starks::~Starks()
{
	cout<<"Se ha eliminado el objeto " << this << endl;
	for (int i=0; i<nobles.size();i++){
		delete nobles[i];
	}
	nobles.clear();
}

//getter

string Starks::getJefeFamilia()
{
	return jefeFamilia;
}

int Starks::getCantidadLobo()
{
	return cantidadLobo;
}

string Starks::getAnimalEmblema()
{
	return animalEmblema;
}

string Starks::getLema()
{
	return lema;
}

FamiliasNobles* Starks::getFamiliaNoble(int i)
{
	return nobles[i];
}

string Starks::getGuerreroValioso()
{
	return guerreroValioso;
}

int Starks::getCantidadIntegrantes()
{
	return cantidadIntegrantes;
}

//setter

void Starks::setJefeFamilia(string jf)
{
	jefeFamilia = jf;
}

void Starks::setCantidadLobo(int i)
{
	cantidadLobo = i;
}

void Starks::setAnimalEmblema(string ae)
{
	animalEmblema = ae;
}

void Starks::setLema(string l)
{
	lema = l;
}

void Starks::addFamiliaNoble(FamiliasNobles* fn)
{
	nobles.push_back(fn);
}

void Starks::setGuerreroValioso(string gv)
{
	guerreroValioso = gv;
}

void Starks::setCantidadIntegrantes(int ci)
{
	cantidadIntegrantes = ci;
}

//Funcion para la cantidad de guerreros nobles

int Starks::getCantidadNobles()
{
	return nobles.size();
}

void Starks::EliminarNobles(int i)
{
	nobles.erase(nobles.begin()+i);
}
