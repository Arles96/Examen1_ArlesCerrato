#include "Targaryen.h"

using namespace std;

Targaryen::Targaryen()
{}

Targaryen::~Targaryen()
{
	cout<<"Eliminado el objeto " << this << endl;
	for (int i=0; i<dothraki.size(); i++){
		delete dothraki[i];
	}
	dothraki.clear();
}

string Targaryen::getReina()
{
	return reina;
}

string Targaryen::getAnimalEmblema()
{
	return animalEmblema;
}

string Targaryen::getLema()
{
	return lema;
}

int Targaryen::getDragones()
{
	return dragones;
}

Dothraki* Targaryen::getDothraki(int n)
{
	return dothraki[n];
}

int Targaryen::getBarcos()
{
	return barcos;
}

int Targaryen::getCantidadDothraki()
{
	return dothraki.size();
}

//setter

void Targaryen::setReina(string r)
{
	reina = r;
}

void Targaryen::setAnimalEmblema(string a)
{
	animalEmblema = a;
}

void Targaryen::setLema(string l)
{
	lema = l;
}

void Targaryen::setDragones(int d)
{
	dragones = d;
}

void Targaryen::addDothraki(Dothraki* d)
{
	dothraki.push_back(d);
}

void Targaryen::setBarcos(int b)
{
	barcos = b;
}
