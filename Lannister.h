#ifndef LANNISTER_H_
#define LANNISTER_H_

#include <iostream>
#include <string>
#include "GuardiaReal.h"
#include <vector>

using namespace std;

class Lannister
{
	private:
		string jefeFamilia;
		string animalEmblema;
		string lema;
		vector<GuardiaReal*> guardias;
		double dinero;
		int fuerzaMontana;
		int cantidadIntegrantes;
	public:
		Lannister();
		~Lannister();
		//getter
		string getJefeFamilia();
		string getAnimalEmblema();
		string getLema();
		GuardiaReal* getGuardiaReal(int);
		double getDinero();
		int getFuerzaMontana();
		int getCantidadIntegrantes();
		int getCantidadGuardias();
		//setter
		void setJefeFamilia(string);
		void setAnimalEmblema(string);
		void setLema(string);
		void addGuardiaReal(GuardiaReal*);
		void setDinero(double);
		void setFuerzaMontana(int);
		void setCantidadIntegrantes(int);
};

#endif
