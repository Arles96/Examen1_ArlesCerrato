#include "Starks.h"
#include "Lannister.h"
#include "Targaryen.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//lannister
	Lannister l;
	int cl = 0;
	//Targaryen
	Targaryen t;
	int ct = 0;
	//Starks
	Starks s;
	int cs = 0;
	char respuesta = 's';
	while (respuesta=='s'){
		int opcion;
		cout<<"MENU" << endl;
		cout<<"1. Agregar Starks" << endl;
		cout<<"2. Agregar Lannister" << endl;
		cout<<"3. Agragar Targaryen" << endl;
		cout<<"4. Ejercito Starks" << endl;
		cout<<"5. Ejercito Lannister" << endl;
		cout<<"6. Ejercito Targaryen" << endl;
		cout<<"7. Simulacion de batalla " << endl;
		cout<<"Ingrese una opcion: " << endl;
		cin>>opcion;
		while (opcion<1 || opcion>7){
			cout<<"Error en la opcion" << endl;
			cout<<"Ingrese una opcion " << endl;
			cin>>opcion;
		}
		if (opcion==1 && cs==0){
			string jefe, animal,lema,guerrero;
			int lobo, integrantes;
			cout<<"Ingrese el nombre del jefe: " ;
			cin>>jefe;
			cout<<"Ingrese la cantidad de lobos: ";
			cin>>lobo;
			cout<<"Ingrese el nombre de un animal para el emblema: ";
			cin>>animal;
			cout<<"Ingrese el lema: ";
			cin>>lema;
			cout<<"Ingresel el nombre del guerrero valioso: ";
			cin>>guerrero;
			cout<<"Ingrese la cantidad de integrantes: ";
			cin>>integrantes;
			s.setJefeFamilia(jefe);
			s.setCantidadLobo(lobo);
			s.setAnimalEmblema(animal);
			s.setLema(lema);
			s.setGuerreroValioso(guerrero);
			s.setCantidadIntegrantes(integrantes);
			cs++;
			cout<<"Se ha agregadp el starks" << endl;
		}
		else {
			cout<<"Ya existe un stark" << endl;
		}
		if (opcion==2 && cl==0){
			string jefe,animal,lema;
			double dinero;
			int fuerza, integrantes;
			cout<<"Ingrese el nombre del jefe: ";
			cin>> jefe;
			cout<<"Ingrese el nombre del animal del emblema: ";
			cin>>animal;
			cout<<"Ingrese el lema: " ;
			cin>>lema;
			cout<<"Ingrese el dinero: ";
			cin>>dinero;
			cout<<"Ingrese la fuerza de la montaña: ";
			cin>>fuerza;
			cout<<"Ingrese la cantidad de integrantes: ";
			cin>>integrantes;
			l.setJefeFamilia(jefe);
			l.setAnimalEmblema(animal);
			l.setLema(lema);
			l.setDinero(dinero);
			l.setFuerzaMontana(fuerza);
			l.setCantidadIntegrantes(integrantes);
			cl++;
			cout<<"Se ha agregado un lannister" << endl;	
		}
		else {
			cout<<"Ya existe un lannister" << endl;
		}
		if (opcion==3 && ct==0){
			string reina, animal,lema;
			int dragones,barcos;
			cout<<"Ingrese el nombre de la reina: ";
			cin>>reina;
			cout<<"Ingrese el nombre del animal de emblema: ";
			cin>>animal;
			cout<<"Ingrese el lema: ";
			cin>>lema;
			cout<<"Ingrese la cantidad de dragones: ";
			cin>>dragones;
			cout<<"Ingrese la cantidad de barcos: ";
			cin>>barcos;
			t.setReina(reina);
			t.setAnimalEmblema(animal);
			t.setLema(lema);
			t.setDragones(dragones);
			t.setBarcos(barcos);
			ct++;
			cout<<"Se ha registrado el Targaryen" << endl;
		}
		else {
			cout<<"Ya existe un Targaryen" << endl;
		}
		if (opcion==4){
			int opcion2;
			cout<<"MENU" << endl;
			cout<<"1. Agregar Familia nomble" << endl;
			cout<<"2. Listar familias nobles" << endl;
			cout<<"3. Eliminar Familia nobles" << endl;	
			cout<<"Ingrese una opcion: ";
			cin>>opcion2;
			while(opcion2<1 || opcion2>3){
				cout<<"Error en la opcion" << endl;
				cout<<"Ingrese una opcion: " << endl;
				cin>>opcion2;
			}
			if (opcion2==1){
				FamiliasNobles* f;
				string nombre, escudo, lema;
				int cantidad;
				double ataque, defensa;
				cout<<"Ingrese el nombre: ";
				cin>>nombre;
				cout<<"Ingrese el simbolo del escudo: ";
				cin>>escudo;	
				cout<<"Ingrese el lema: ";
				cin>>lema;
				cout<<"Ingrese la cantidad: ";
				cin>>cantidad;
				cout<<"Ingrese el ataque: ";
				cin>>ataque;
				cout<<"Ingrese la defensa: ";
				cin>>defensa;
				f->setNombre(nombre);
				f->setSimboloEscudo(escudo);
				f->setLema(lema);
				f->setCantidad(cantidad);
				f->setAtaque(ataque);
				f->setDefensa(defensa);
				s.addFamiliaNoble(f);
				cout<<"Se ha agregado la familia noble" << endl;
			}
			else if(opcion2==2){
				for (int i = 0; i<s.getCantidadNobles();i++){
					cout<< i <<" " <<s.getFamiliaNoble(i)->getNombre() << endl;
				}
				cout<< endl;
			}
			else if (opcion2==3){
				//TODO; eliminar y hacer retinar el vector en Starks
				int eliminar;
				cout<<"Ingrese la posicion a eliminar: ";
				cin>>eliminar;
				//delete s.getFamiliaNoble(i);
			}
		}
		if (opcion==5){
			int opcion2;
			cout<<"MENU" << endl;
			cout<<"1. Agregar guardia familia" << endl;
			cout<<"2. Listar guardias reales" << endl;
			cout<<"3. Eliminar guardias" << endl;	
			cout<<"Ingrese una opcion: " << endl;
			cin>>opcion2;
			while (opcion2<1 || opcion2>3){
				cout<<"Error en la opcion" << endl;
				cout<<"Ingrese una opcion: " ;
				cin>>opcion2;
			}
			if (opcion2==1){
				GuardiaReal* g;
				string nombre;
				int edad;
				double ataque, defensa;
				cout<<"Ingrese el nombre: ";
				cin>>nombre;
				cout<<"Ingrese la edad: ";
				cin>>edad;
				g->setTipoSoldado();
				cout<<"Ingrese el ataque: ";
				cin>>ataque;
				cout<<"Ingrese la defensa: ";
				cin>>defensa;
				g->setNombre(nombre);
				g->setAtaque(ataque);
				g->setEdad(edad);
				g->setDefensa(defensa);
				l.addGuardiaReal(g);
				cout<<"Se ha registrado el guardia real" << endl;
			}
			else if(opcion2==2){
				for (int i=0; i<l.getCantidadGuardias();i++){
					cout<< i << " " << l.getGuardiaReal(i)->getNombre();
				}
				cout<< endl;
			}
			else if (opcion2==3){
				int eliminar;
				cout<<"Ingrese la posicion para eliminar: ";
				cin>>eliminar;
			}
		}
		cout<<"Desea continuar [s/n]: ";
		cin>>respuesta;		
	}
}
