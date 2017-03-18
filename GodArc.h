#pragma once
#include <string>

using namespace std;

class GodArc {
	private:
		int nivel;
		string elemento;

	public:
		GodArc();
		GodArc(int, string);

		int getNivel();
		string getElemento();

		void setNivel(int);
		void setElemento(string);
};
