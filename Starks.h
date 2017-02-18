#ifndef STARKS_H_
#define STARKS_H_

#include <iostream>
#include <string>
#include "FamiliasNobles.h"
#include <vector>

using namespace std;

class Starks
{
	private:
		string jefeFamilia;
		int cantidadLobo;
		string animalEmblema;
		string lema;
		vector<FamiliasNobles*> nobles;
		string guerreroValioso;
		int cantidadIntegrantes;
	public:
		Starks();
		~Starks();
		//getter
		string getJefeFamilia();
		int getCantidadLobo();
		string getAnimalEmblema();
		string getLema();
		FamiliasNobles* getFamiliaNoble(int);
		string getGuerreroValioso();
		int getCantidadIntegrantes();
		//setter
		void setJefeFamilia(string);
		void setCantidadLobo(int);
		void setAnimalEmblema(string);
		void setLema(string);
		void addFamiliaNoble(FamiliasNobles*);
		void setGuerreroValioso(string);
		void setCantidadIntegrantes(int);
		//Funcion para la cantidad de guerreros
		int getCantidadNobles();
		void EliminarNobles(int);
};

#endif 
