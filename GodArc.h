#pragma once
#include <string>

using namespace std;

class GodArc {
	protected:
		int ataque;
		string elemento;

	public:
		GodArc();
		GodArc(int, string);

		 int getAtaque();
		 string getElemento();

		 void setAtaque(int);
		 void setElemento(string);

		 int atacar();
};
