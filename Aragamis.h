#pragma once
#include <string>

using namespace std;

class Aragamis {
	private:
		string nombre;
		int vida;
		int defensa;
		int ataque;
		string elemento;

	public:
		Aragamis();
		Aragamis(string, int, int, int, string);

		string getNombre();
		int getVida();
		int getDefensa();
		int getAtaque();
		string getElemento();

		void setNombre(string);
		void setVida(int);
		void setDefensa(int);
		void setAtaque(int);
		void setElemento(string);
};
