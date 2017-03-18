#include "GodArc.h"

GodArc::GodArc()
{
	nivel = 0;
	elemento = "";
}

GodArc::GodArc(int pNivel, string pElemento)
{
	nivel = pNivel;
	elemento = pElemento;
}

int GodArc::getNivel()
{
	return nivel;
}

string GodArc::getElemento()
{
	return elemento;
}

void GodArc::setNivel(int pNivel)
{
	nivel = pNivel;
}

void GodArc::setElemento(string pElemento)
{
	elemento = pElemento;
}
