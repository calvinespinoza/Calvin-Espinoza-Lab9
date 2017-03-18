#include "Aragamis.h"
#include "GodArc.h"
#include "GodEaters.h"
#include "Scythe.h"
#include "ShortSword.h"
#include "BusterSword.h"

#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

void imprimirGodArcs(vector <GodArc*>);
void imprimirGodEaters(vector <GodEaters*>);
void imprimirAragamis(vector <Aragamis*>);

int main() {
	vector <GodArc*> godarcs;
	vector <GodEaters*> godeaters;
	vector <Aragamis*> v_aragamis;

	int option1;
	cout << "MENU" << endl
	<< "1. Agregar" << endl
	<< "2. Modificar" << endl
	<< "3. Eliminar" << endl;
	cin >> option1;

	if(option1 == 1)
	{
		int option2;
		cout << "AGREGAR" << endl
		<< "1. GodArcs" << endl
		<< "2. GodEaters" << endl
		<< "3. Aragamis" << endl;
		cin >> option2;

		if (option2 == 1)
		{
			int option3;
			cout << endl << "GODARCS" << endl
			<< "1. Buster Sword" << endl
			<< "2. Scythe" << endl
			<< "3. Short Sword" << endl;
			cin >> option3;

			int ataqueBase, nivelAtaque, tipo = 0, poder;
			string elemento;
			cout << "Ingrese el nivel de ataque base del GodArc" << endl;
			cin >> ataqueBase;

			while (tipo < 1 ||tipo > 3) {
				cout << "Eliga el tipo de elemento: " << endl
				<< "1. Divine\n2. Blaze\n3. Freeze" << endl;
				cin >> tipo;

				if (tipo == 1)
				{
					elemento = "Divine";
				}
				else if (tipo == 2)
				{
					elemento = "Blaze";
				}
				else if (tipo == 3)
				{
					elemento = "Freeze";
				} else {
					cout << "Opcion no valida";
				}
			}

			if (option3 == 1)
			{
				cout << "Ingrese el nivel del ataque crush" << endl;
				cin >> nivelAtaque;
				cout << "Ingrese el valor del poder explosivo" << endl;
				cin >> poder;

				BusterSword* arma = new BusterSword(ataqueBase, elemento, nivelAtaque, poder);
				godarcs.push_back(arma);
			}
			else if (option3 == 2)
			{
				cout << "Ingrese el nivel del ataque slash" << endl;
				cin >> nivelAtaque;
				cout << "Ingrese el valor del poder de corte largo" << endl;
				cin >> poder;

				Scythe* arma = new Scythe(ataqueBase, elemento, nivelAtaque, poder);
				godarcs.push_back(arma);
			}
			else if (option3 == 3)
			{
				cout << "Ingrese el nivel del ataque pierce" << endl;
				cin >> nivelAtaque;
				cout << "Ingrese el valor del poder de speed cut" << endl;
				cin >> poder;

				ShortSword* arma = new ShortSword(ataqueBase, elemento, nivelAtaque, poder);
				godarcs.push_back(arma);
			}
			else
			{
				cout << "Opcion de GodArcs no valida, arma no agregada";
			}
		}
		else if (option2 == 2)
		{
			string nombre;
			int nivel, posicion;
			cout << "GODEATERS" << endl;
			cout << "Ingrese el nombre" << endl;
			cin >> nombre;
			cout << "Ingrese el nivel del guerrero" << endl;
			cin >> nivel;

			imprimirGodArcs(godarcs);
			cout << endl << "Eliga el GodArc para el guerrero" << endl;
			cin >> posicion;

			GodEaters* guerrero = new GodEaters(nombre, nivel);
			guerrero -> setGodArc(godarcs.at(posicion));
			godeaters.push_back(guerrero);
		}
		else if (option2 == 3)
		{
			string nombre, elemento;
			int vida, defensa, ataque, tipo = 0;

			cout << "Aragamis" << endl;
			cout << "Ingrese el nombre del aragamis" << endl;
			cin >> nombre;

			while (tipo < 1 ||tipo > 3) {
				cout << "Eliga el tipo de elemento: " << endl
				<< "1. Divine\n2. Blaze\n3. Freeze" << endl;
				cin >> tipo;

				if (tipo == 1)
				{
					elemento = "Divine";
				}
				else if (tipo == 2)
				{
					elemento = "Blaze";
				}
				else if (tipo == 3)
				{
					elemento = "Freeze";
				} else {
					cout << "Opcion no valida";
				}
			}

			cout << "Ingrese cantidad de vida" << endl;
			cin >> vida;
			cout << "Ingrese nivel de defensa" << endl;
			cin >> defensa;
			cout <<"Ingrese nivel de ataque" << endl;
			cin >> ataque;

			Aragamis* aragamis = new Aragamis(nombre, vida, defensa, ataque, elemento);
			v_aragamis.push_back(aragamis);


		}



	}

	return 0;
}

void imprimirGodArcs(vector <GodArc*> vector1)
{

        for (int j = 0; j < vector1.size(); j++) {
		string type = "???";
		if (typeid(*vector1.at(j)) == typeid(BusterSword))
		{
			type = "Buster Sword";
		}
		else if (typeid(*vector1.at(j)) == typeid(Scythe))
		{
			type = "Scythe";
		}
		else if (typeid(*vector1.at(j)) == typeid(BusterSword))
		{
			type = "Short Sword";
		}
                cout << j+1 << ") " << type << vector1.at(j) -> getElemento() << endl;
        }
}
void imprimirGodEaters(vector <GodEaters*> vector1)
{
        for (int j = 0; j < vector1.size(); j++) {
                cout << j+1 << ") " << vector1.at(j) -> getNombre() << endl;
        }
}
void imprimirAragamis(vector <Aragamis*> vector1)
{
        for (int j = 0; j < vector1.size(); j++) {
                cout << j+1 << ") " << vector1.at(j) -> getNombre() << endl;
        }
}
