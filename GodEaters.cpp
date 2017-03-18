#include "GodEaters.h"

GodEaters::GodEaters()
{
	nombre = "";
	nivel = 0;
	vida = 0;
	defensa = 0;
}

GodEaters::GodEaters(string pNombre, int pNivel)
{
	nombre = pNombre;
	nivel = pNivel;
	setVida(pNivel);
	setDefensa(pNivel);
}

string GodEaters::getNombre()
{
	return nombre;
}

int GodEaters::getNivel()
{
	return nivel;
}

int GodEaters::getVida()
{
	return vida;
}

int GodEaters::getDefensa()
{
	return defensa;
}

GodArc* GodEaters::getGodArc()
{
	return godarc;
}

void GodEaters::setNombre(string pNombre)
{
	nombre = pNombre;
}

void GodEaters::setNivel(int pNivel)
{
	nivel = pNivel;
	setVida(pNivel);
	setDefensa(pNivel);
}

void GodEaters::setVida(int pNivel)
{
	vida = pNivel * 50;

}
void GodEaters::setDefensa(int pNivel)
{
	defensa = pNivel * 20;

}
void GodEaters::setGodArc(GodArc* pGodarc)
{
	godarc = pGodarc;
}
