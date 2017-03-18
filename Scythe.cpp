#include "Scythe.h"

Scythe::Scythe()
{
	ataque = 0;
	elemento = "";
	nivelAtaque = 0;
	poder = 0;
}

Scythe::Scythe(int pAtaque, string pElemento, int pNivelAtaque, int pPoder) : GodArc(pAtaque, pElemento)
{
	ataque = pAtaque;
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

int Scythe::atacar()
{
	return GodArc::getAtaque() + nivelAtaque;
}
