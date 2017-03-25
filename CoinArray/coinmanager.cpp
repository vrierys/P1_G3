#include "coinmanager.h"
#include <iostream>
#include <cstdlib>

coinmanager::coinmanager(Mapa a) :mimapa(a)
{
	generator();
}

void coinmanager::generator()
{
	int min = 3 * (mimapa.arrcapacity*mimapa.arrcapacity) / 100;
	int max = 13 * (mimapa.arrcapacity*mimapa.arrcapacity) / 100;
	cant = min + rand() % (max - min);
	int aux = cant;
	do
	{
		int x = 1+rand() % (mimapa.arrcapacity-1);//se le suma uno para que quede libre la posicion 0
		int y = 1+rand() % (mimapa.arrcapacity-1);//se le suma uno para que quede libre la posicion 0
		if (mimapa.map[x][y] != '$')
		{
			mimapa.modificator(x, y, '$');
			system("cls");
			mimapa.print();
			aux--;
		}

	} while (aux>0);

}

void coinmanager::coindelete()
{
	cant--;
	if (cant == 0)
	{
		generator();
	}
}
