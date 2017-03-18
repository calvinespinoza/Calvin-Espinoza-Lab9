#include "ShortSword.h"

ShortSword::ShortSword()
{
	ataque = 0;
	elemento = "";
	nivelAtaque = 0;
	poder = 0;
}

ShortSword::ShortSword(int pAtaque, string pElemento, int pNivelAtaque, int pPoder) : GodArc(pAtaque, pElemento)
{
	ataque = pAtaque;
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

int ShortSword::atacar()
{
	return GodArc::getAtaque() + nivelAtaque;
}
