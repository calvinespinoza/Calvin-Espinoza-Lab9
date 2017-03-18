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

	int option1 = 1;
	while (option1 > 0 && option1 < 5) {
		cout << endl << "*************************************************************" << endl;
		cout << "                     MENU" << endl
		<< "1. Agregar" << endl
		<< "2. Modificar" << endl
		<< "3. Eliminar" << endl
		<< "4. Simulacion" << endl
		<< "5. Salir" << endl;
		cin >> option1;
		cout << endl << "*************************************************************" << endl;
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
						cout << "Opcion no valida" << endl;
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

					if (typeid(*arma) == typeid(BusterSword))
					{
						cout << "yes" << endl;
					} else {
						cout << "no" << endl;
					}
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
					cout << "Opcion de GodArcs no valida, arma no agregada" << endl;
				}
				cout << "El GodArc ha sido agregado exitosamente" << endl;
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
				guerrero -> setGodArc(godarcs.at(posicion-1));
				godeaters.push_back(guerrero);
				cout << "El GodEater ha sido agregado exitosamente" << endl;
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
						cout << "Opcion no valida" << endl;
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

				cout << "El Aragamis ha sido agregado exitosamente" << endl;
			}
		}
		if (option1 == 2)
		{
			int option2, posicion;
			cout << "MODIFICAR" << endl
			<< "1. GodArcs" << endl
			<< "2. GodEaters" << endl
			<< "3. Aragamis" << endl;
			cin >> option2;
			cout << "Eliga el objeto que desea modificar" << endl;

			if (option2 == 1)
			{
				imprimirGodArcs(godarcs);
				cin >> posicion;

				cout << "GODARCS" << endl;
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
						cout << "Opcion no valida" << endl;
					}
				}

				cout << "Ingrese el nivel del ataque" << endl;
				cin >> nivelAtaque;
				cout << "Ingrese el valor del poder del arma" << endl;
				cin >> poder;

				godarcs.at(posicion-1) -> setAtaque(ataqueBase);
				godarcs.at(posicion-1) -> setElemento(elemento);
				if (typeid(*godarcs.at(posicion-1)) == typeid(BusterSword))
				{
					BusterSword* temp = (BusterSword *) godarcs.at(posicion-1);
					temp -> setNivelAtaque(nivelAtaque);
					temp -> setPoder(poder);
				}
				else if (typeid(godarcs.at(posicion-1)) == typeid(Scythe))
				{
					Scythe* temp = (Scythe *) godarcs.at(posicion-1);
					temp -> setNivelAtaque(nivelAtaque);
					temp -> setPoder(poder);
				}
				else if (typeid(godarcs.at(posicion-1)) == typeid(ShortSword))
				{
					ShortSword* temp = (ShortSword *) godarcs.at(posicion-1);
					temp -> setNivelAtaque(nivelAtaque);
					temp -> setPoder(poder);
				}

				cout << "El GodArc ha sido modificado exitosamente" << endl;
			}
			else if (option2 == 2)
			{
				int pos, nivel;
				string nombre;
				imprimirGodEaters(godeaters);
				cin >> posicion;

				cout << "Ingrese el nombre" << endl;
				cin >> nombre;
				cout << "Ingrese el nivel del guerrero" << endl;
				cin >> nivel;

				imprimirGodArcs(godarcs);
				cout << endl << "Eliga el GodArc para el guerrero" << endl;
				cin >> pos;

				godeaters.at(posicion-1) -> setNombre(nombre);
				godeaters.at(posicion-1) -> setNivel(nivel);
				godeaters.at(posicion-1) -> setGodArc(godarcs.at(pos-1));

				cout << "El GodEater ha sido modificado exitosamente" << endl;
			}
			else if (option2 == 3)
			{
				imprimirAragamis(v_aragamis);
				cin >> posicion;

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
						cout << "Opcion no valida" << endl;
					}
				}

				cout << "Ingrese cantidad de vida" << endl;
				cin >> vida;
				cout << "Ingrese nivel de defensa" << endl;
				cin >> defensa;
				cout <<"Ingrese nivel de ataque" << endl;
				cin >> ataque;

				v_aragamis.at(posicion-1) -> setNombre(nombre);
				v_aragamis.at(posicion-1) -> setVida(vida);
				v_aragamis.at(posicion-1) -> setAtaque(ataque);
				v_aragamis.at(posicion-1) -> setDefensa(defensa);
				v_aragamis.at(posicion-1) -> setElemento(elemento);

				cout << "Aragamis modificado exitosamente" << endl;
			}
		}
		if (option1 == 3)
		{
			int option2, posicion;
			cout << "MODIFICAR" << endl
			<< "1. GodArcs" << endl
			<< "2. GodEaters" << endl
			<< "3. Aragamis" << endl;
			cin >> option2;
			cout << "Eliga el objeto que desea eliminar" << endl;

			if (option2 == 1)
			{
				imprimirGodArcs(godarcs);
				cin >> posicion;
				godarcs.erase(godarcs.begin() + posicion-1);
			}
			else if (option2 == 2)
			{
				imprimirGodEaters(godeaters);
				cin >> posicion;
				godeaters.erase(godeaters.begin() + posicion-1);
			} else if (option2 == 3)
			{
				imprimirAragamis(v_aragamis);
				cin >> posicion;
				v_aragamis.erase(v_aragamis.begin() + posicion-1);
			}
		}
		if (option1 == 4)
		{
			int pos1, pos2;
			int ataque1, defensa1, ataque2, defensa2;
			int vida1, vida2;
			string cont, nombre1, nombre2;

			imprimirGodEaters(godeaters);
			cout << "Elegir GodEater" << endl;
			cin >> pos1;

			imprimirAragamis(v_aragamis);
			cout << "Elegir Aragamis" << endl;
			cin >> pos2;

			godeaters.at(pos1-1) -> getGodArc() -> atacar();

			if (typeid(*godeaters.at(pos1-1) -> getGodArc()) == typeid(BusterSword))
			{
				BusterSword* temp = (BusterSword *) godeaters.at(pos1-1) -> getGodArc();
				ataque1 = temp -> atacar();
			}
			else if (typeid(*godeaters.at(pos1-1) -> getGodArc()) == typeid(Scythe))
			{
				Scythe* temp = (Scythe *) godeaters.at(pos1-1) -> getGodArc();
				ataque1 = temp -> atacar();
			}
			else if (typeid(*godeaters.at(pos1-1) -> getGodArc()) == typeid(ShortSword))
			{
				ShortSword* temp = (ShortSword *) godeaters.at(pos1-1) -> getGodArc();
				ataque1 = temp -> atacar();
			}

			defensa1 = godeaters.at(pos1-1) -> getDefensa();
			ataque2 = v_aragamis.at(pos2-1) -> getAtaque();
			defensa2 = v_aragamis.at(pos2-1) -> getDefensa();

			vida1 = godeaters.at(pos1-1) -> getVida();
			vida2 = v_aragamis.at(pos2-1) -> getVida();
			nombre1 = godeaters.at(pos1-1) -> getNombre();
			nombre2 = v_aragamis.at(pos2-1) -> getNombre();

			if (defensa1 > ataque2)
			{
				cout << "Ha ganado el GodEater automaticamente" << endl;
				godeaters.at(pos1-1) -> setNivel(godeaters.at(pos1-1) -> getNivel() + 1);
			}
			else
			{
				while (vida1 > 0 && vida2 > 0)
				{
					cout << endl << "---------------------------------------------------------------" << endl;
					cout << endl <<  "GodEater " << nombre1 << endl << "HP: " << vida1 << endl;
					cout << "Aragamis " << nombre2 << endl << "HP: " << vida2 << endl << endl;

					cout << "El GodEater ataca" << endl;
					cout << "Se reduce la vida del Aragamis por " << ataque1 << endl;
					vida2 -= ataque1;

					cout << "El Aragamis ataca" << endl;
					cout << "Se reduce la vida del GodEater por " << ataque2 - defensa1 << endl;
					vida1 -= ataque2 + defensa1;

					if (vida1 <= 0)
					{
						cout << "Ha ganado el Aragamis " << nombre2 << endl;
					}
					else if (vida2 <= 0)
					{
						cout << "Ha ganado el GodEater " << nombre1 << endl;
						cout << nombre1 << " ha subido de nivel!" << endl;
						godeaters.at(pos1-1) -> setNivel(godeaters.at(pos1-1) -> getNivel() + 1);
					}

					cout << "Continuar pelea [y]: ";
					cin >> cont;
					cout << endl << "---------------------------------------------------------------" << endl;
				}



			}
		}
		if (option1 == 5)
		{
			return 0;
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
		else if (typeid(*vector1.at(j)) == typeid(ShortSword))
		{
			type = "Short Sword";
		}
                cout << j+1 << ") " << type /*<< vector1.at(j).name()*/ << " – " << vector1.at(j) -> getElemento() << endl;
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
