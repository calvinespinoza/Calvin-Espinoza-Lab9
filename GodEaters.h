#pragma once
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
		GodEaters(string, int, int, int);

		string getNombre();
		int getVida();
		int getNivel();
		int getDefensa();

		void setNombre(string);
		void setVida(int);
		void setNivel(int);
		void setDefensa(int);

};
