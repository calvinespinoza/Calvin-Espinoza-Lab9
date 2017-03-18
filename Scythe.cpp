#include "Scythe.h"

Scythe::Scythe()
{
	nivel = 0;
	elemento = "";
	nivelAtaque = 0;
	poder = 0;
}

Scythe::Scythe(int pNivel, string pElemento, int pNivelAtaque, int pPoder) : GodArc(pNivel, pElemento)
{
	nivel = pNivel;
	elemento = pElemento;
	nivelAtaque = pNivelAtaque;
	poder = pPoder;
}

int Scythe::getNivelAtaque()
{
	return nivelAtaque;
}

int Scythe::getPoder()
{
	return poder;
}

void Scythe::setNivelAtaque(int pNivelAtaque)
{
	nivelAtaque = pNivelAtaque;
}

void Scythe::setPoder(int pPoder)
{
	poder = pPoder;
}
