#pragma once
#include "GodArc.h"
#include <string>

using namespace std;

class GodEaters {
	private:
		string nombre;
		int vida;
		int nivel;
		int defensa;
		GodArc* godarc;

	public:
		GodEaters();
		GodEaters(string, int);

		string getNombre();
		int getVida();
		int getNivel();
		int getDefensa();
		GodArc* getGodArc();

		void setNombre(string);
		void setVida(int);
		void setNivel(int);
		void setDefensa(int);
		void setGodArc(GodArc*);
};
