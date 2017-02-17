#ifndef GUARDIAREAL_H_
#define GUARDIAREAL_H_

#include <iostream>
#include <string>

using namespace std;

class GuardiaReal
{
	private:
		string nombre;
		int edad;
		string tipoSoldado;
		double ataque;
		double defensa;
	public:
		GuardiaReal();
		~GuardiaReal();
		//getter
		string getNombre();
		int getEdad();
		string getTipoSoldado();
		double getAtaque();
		double getDefensa();
		//setter
		void setNombre(string);
		void setEdad(int);
		void setTipoSoldado();
		void setAtaque(double);
		void setDefensa(double);
};

#endif
