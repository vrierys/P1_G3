#include "coinmanager.h"
#include <iostream>

coinmanager::coinmanager(Mapa a) :mimapa(a)
{
}

void coinmanager::generator()
{
	int min = 3 * (mimapa.numcolums*mimapa.numfilas) / 100;
	int max = 13 * (mimapa.numcolums*mimapa.numfilas) / 100;
	cant = min + rand() % (max - min);
	int aux = cant;
	do
	{
		int x = 1+rand() % (mimapa.numfilas);//se le suma uno para que quede libre la posicion 0
		int y = 1+rand() % (mimapa.numcolums);//se le suma uno para que quede libre la posicion 0
		if (mimapa.map[x][y] != '$')
		{
			mimapa.modificator(x, y, '$');
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
