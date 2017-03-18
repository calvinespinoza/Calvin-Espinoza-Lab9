#include "GodArc.h"

GodArc::GodArc()
{
	ataque = 0;
	elemento = "";
}

GodArc::GodArc(int pAtaque, string pElemento)
{
	ataque = pAtaque;
	elemento = pElemento;
}

int GodArc::getAtaque()
{
	return ataque;
}

string GodArc::getElemento()
{
	return elemento;
}

void GodArc::setAtaque(int pAtaque)
{
	ataque = pAtaque;
}

void GodArc::setElemento(string pElemento)
{
	elemento = pElemento;
}

int GodArc::atacar()
{
	return ataque;
}
