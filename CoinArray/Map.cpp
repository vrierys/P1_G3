#include "Map.h"
#include <iostream>
#include "Map.h"
Mapa::Mapa(int dif)
{
	numfilas = 5 * dif + rand() % (5 * dif * 2 - 5 * dif);
	numcolums = 5 * dif + rand() % (5 * dif * 2 - 5 * dif);
	md = new char*[numfilas];
	for (int i = 0; i < numfilas; i++)
	{
		md[i] = new char[numcolums];
		for (int j = 0; j < numcolums; j++)
		{
			md[i][j] = '.';
		}
	}
}

Mapa::~Mapa()
{
	for (int i = 0; i <numfilas; i++)
	{
		delete[]md[i];
	}
	delete[]md;
}

void Mapa::modificador(int fila, int columna, char simbol)
{
	md[fila][columna] = simbol;
}

void Mapa::print()
{
	for (int i = 0; i < numfilas; i++)
	{
		for (int j = 0; j < numcolums; j++)
		{
			std::cout << md[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}