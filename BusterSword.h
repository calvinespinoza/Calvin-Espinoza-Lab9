#pragma once
#include "GodArc.h"

class BusterSword : public GodArc {
	private:
		int nivelAtaque;
		int poder;

	public:
		BusterSword();
		BusterSword(int, string, int, int);

		int getNivelAtaque();
		int getPoder();

		void setNivelAtaque(int);
		void setPoder(int);
};
