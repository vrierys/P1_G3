#include "coinmanager.h"
#include <iostream>
#include <cstdlib>

coinmanger::coinmanger(Mapa &a) : mimap(a)
{
	generator();
}

coinmanger::~coinmanger()
{
}

void coinmanger::generator()
{
	tam = mimap.numcolums*mimap.numfilas;
	// Cantidad de monedas que se generan.
	coinstogenerate = (3 * tam) / 100 + rand() % ((13 * tam) / 100 - (3 * tam) / 100);
	// Las monedas que se pueden ver en el mapa.
	visblecoins = coinstogenerate;

	do
	{
		column = rand() % (mimap.numcolums-1);
		fila = rand() % (mimap.numfilas-1);
		if (mimap.md[fila][column] != '$'&& mimap.md[fila][column]!='@')
		{
			mimap.modificador(fila, column, '$');
			coinstogenerate--;
		}
	} while (coinstogenerate>0);
}

void coinmanger::deletcoin()
{
	visblecoins--;
	if (visblecoins == 0)
	{
		generator();
	}
}
