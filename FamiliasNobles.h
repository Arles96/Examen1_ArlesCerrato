#ifndef FAMILIASNOBLES_H_
#define FAMILIASNOBLES_H_

#include <iostream>
#include <string>

using namespace std;

class FamiliasNobles
{
	private:	
		string nombre;
		string simboloEscudo;
		string lema;
		int cantidad;
		double ataque;
		double defensa;
	public:
		FamiliasNobles();
		~FamiliasNobles();
		//getter
		string getNombre();
		string getSimboloEscudo();
		string getLema();
		int getCantidad();
		double getAtaque();
		double getDefensa();
		//setter
		void setNombre(string);
		void setSimboloEscudo(string);
		void setLema(string);
		void setCantidad(int);
		void setAtaque(double);
		void setDefensa(double);
};

#endif 
