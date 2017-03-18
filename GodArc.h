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

		virtual int getNivelAtaque();
		virtual int getPoder();
		virtual void setNivelAtaque(int);
 		virtual void setPoder(int);

		virtual int atacar();
};
