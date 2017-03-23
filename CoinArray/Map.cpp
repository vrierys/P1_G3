#include "Map.h"
#include <iostream>
Mapa::Mapa(int lvldif)
{
	 numfilas = 5 * lvldif + rand() % (5 * lvldif * 2 - 5 * lvldif);
	 numcolums = 5 * lvldif + rand()% (5 * lvldif *2- 5 * lvldif);
	map = new char*[numfilas];
	for (int i = 0; i <numfilas; i++)
	{
		map[i] = new char[numcolums];
		for (int j = 0; j < numcolums; j++)
		{
				map[i][j] = '.';
		}
	}	
}

Mapa::~Mapa()
{
	for (int i = 0; i < numfilas; i++)
	{
		delete[]map[i];
	}
	delete[]map;
}


void Mapa::modificator(int x, int y, char a)
{
	map[x][y] = a;
}

void Mapa::print()
{
	for (int i = 0; i < numfilas; i++)
	{
		for (int j = 0; j < numcolums; j++)
		{
			std::cout << map[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}
