#ifndef TARGARYEN_H_
#define TARGARYEN_H_

#include <iostream>
#include <string>
#include <vector>
#include "Dothraki.h"

using namespace std;

class Targaryen
{
	private:
		string reina;
		string animalEmblema;
		string lema;
		int dragones;
		vector<Dothraki*> dothraki;
		int barcos;
	public:
		Targaryen();
		~Targaryen();
		//getter
		string getReina();
		string getAnimalEmblema();
		string getLema();
		int getDragones();
		Dothraki* getDothraki(int);
		int getBarcos();
		int getCantidadDothraki();
		//setter
		void setReina(string);
		void setAnimalEmblema(string);
		void setLema(string);
		void setDragones(int);
		void addDothraki(Dothraki*);
		void setBarcos(int);
};

#endif
