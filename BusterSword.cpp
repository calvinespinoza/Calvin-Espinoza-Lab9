#include "BusterSword.h"

BusterSword::BusterSword()
{
	nivel = 0;
	elemento = "";
	nivelAtaque = 0;
	poder = 0;
}

BusterSword::BusterSword(int pNivel, string pElemento, int pNivelAtaque, int pPoder) : GodArc(pNivel, pElemento)
{
	nivel = pNivel;
	elemento = pElemento;
	nivelAtaque = pNivelAtaque;
	poder = pPoder;
}

int BusterSword::getNivelAtaque()
{
	return nivelAtaque;
}

int BusterSword::getPoder()
{
	return poder;
}

void BusterSword::setNivelAtaque(int pNivelAtaque)
{
	nivelAtaque = pNivelAtaque;
}

void BusterSword::setPoder(int pPoder)
{
	poder = pPoder;
}
