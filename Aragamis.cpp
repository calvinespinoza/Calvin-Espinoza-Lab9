#include "Aragamis.h"

Aragamis::Aragamis()
{
	nombre = "";
	vida = 0;
	defensa = 0;
	ataque = 0;
	elemento = "";
}

Aragamis::Aragamis(string pNombre, int pVida, int pDefensa, int pAtaque, string pElemento)
{
	nombre = pNombre;
	vida = pVida;
	defensa = pDefensa;
	ataque = pAtaque;
	elemento = pElemento;
}

string Aragamis::getNombre()
{
	return nombre;
}

int Aragamis::getVida()
{
	return vida;
}

int Aragamis::getDefensa()
{
	return defensa;
}

int Aragamis::getAtaque()
{
	return ataque;
}

string Aragamis::getElemento()
{
	return elemento;
}

void Aragamis::setNombre(string pNombre)
{
	nombre = pNombre;
}

void Aragamis::setVida(int pVida)
{
	vida = pVida;
}

void Aragamis::setDefensa(int pDefensa)
{
	defensa = pDefensa;
}

void Aragamis::setAtaque(int pAtaque)
{
	ataque = pAtaque;
}

void Aragamis::setElemento(string pElemento)
{
	elemento = pElemento;
}
