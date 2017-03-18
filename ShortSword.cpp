#include "ShortSword.h"

ShortSword::ShortSword()
{
	nivel = 0;
	elemento = "";
	nivelAtaque = 0;
	poder = 0;
}

ShortSword::ShortSword(int pNivel, string pElemento, int pNivelAtaque, int pPoder) : GodArc(pNivel, pElemento)
{
	nivel = pNivel;
	elemento = pElemento;
	nivelAtaque = pNivelAtaque;
	poder = pPoder;
}

int ShortSword::getNivelAtaque()
{
	return nivelAtaque;
}

int ShortSword::getPoder()
{
	return poder;
}

void ShortSword::setNivelAtaque(int pNivelAtaque)
{
	nivelAtaque = pNivelAtaque;
}

void ShortSword::setPoder(int pPoder)
{
	poder = pPoder;
}