#pragma once
#include "GodArc.h"

class Scythe : public GodArc {
	private:
		int nivelAtaque;
		int poder;

	public:
		Scythe();
		Scythe(int, string, int, int);

		int getNivelAtaque();
		int getPoder();

		void setNivelAtaque(int);
		void setPoder(int);

		virtual int atacar();
};
