#include "BusterSword.h"

BusterSword::BusterSword()
{
	ataque = 0;
	elemento = "";
	nivelAtaque = 0;
	poder = 0;
}

BusterSword::BusterSword(int pAtaque, string pElemento, int pNivelAtaque, int pPoder) : GodArc(pAtaque, pElemento)
{
	ataque = pAtaque;
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

int BusterSword::atacar()
{
	return GodArc::getAtaque() + nivelAtaque;
}
