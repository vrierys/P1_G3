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
	visiblecoins = (3 * tam) / 100 + rand() % ((13 * tam) / 100 - (3 * tam) / 100);
	aux = visiblecoins;

	do
	{
		column = rand() % (mimap.numcolums-1);
		fila = rand() % (mimap.numfilas-1);
		if (mimap.md[fila][column] != '$'&& mimap.md[fila][column]!='@')
		{
			mimap.modificador(fila, column, '$');
			aux--;
		}
	} while (aux>0);
}

void coinmanger::deletcoin()
{
	aux++;
	if (visiblecoins == aux)
	{
		generator();
	}
}
