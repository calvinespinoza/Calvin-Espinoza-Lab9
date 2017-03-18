#pragma once
#include "GodArc.h"

class ShortSword : public GodArc {
	private:
		int nivelAtaque;
		int poder;

	public:
		ShortSword();
		ShortSword(int, string, int, int);

		int getNivelAtaque();
		int getPoder();

		void setNivelAtaque(int);
		void setPoder(int);
};
