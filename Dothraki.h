#ifndef DOTHRAKI_H_
#define DOTHRAKI_H_

#include <iostream>
#include <string>

using namespace std;

class Dothraki
{
	private:
		string nombre;
		string jefeBarbaro;
		string nombreCaballo;
		string colorCaballo;
		double ataque;
		double defensa;
	public:
		Dothraki();
		~Dothraki();
		//getter
		string getNombre();
		string getJefeBarbaro();
		string getNombreCaballo();
		string getColorCaballo();
		double getAtaque();
		double getDefensa();
		//setter
		void setNombre(string);
		void setJefeBarbaro(string);
		void setNombreCaballo(string);
		void setColorCaballo(string);
		void setAtaque(double);
		void setDefensa(double);
};

#endif
