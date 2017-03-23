#include "coinmanager.h"
#include <iostream>

coinmanager::coinmanager(Mapa a):mimapa(a)
{
	
	int min = 3 * (mimapa.numcolums*mimapa.numfilas) / 100;
	int max = 13 * (mimapa.numcolums*mimapa.numfilas) / 100;
	cant = min + rand() % (max - min);
	int aux = cant;
	do
	{
		int x = rand() % (mimapa.numfilas);
		int y = rand() % (mimapa.numcolums);
		if (mimapa.map[x][y]!='$')
		{
			mimapa.map[x][y] == '$';
			aux--;
		}

	} while (aux>0);





}
