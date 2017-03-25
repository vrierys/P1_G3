#include "Map.h"
#include <iostream>
#include <string>
Mapa::Mapa(int lvldif)
{
	arrcapacity = 5 * lvldif + rand() % (5 * lvldif * 2 - 5 * lvldif);
	map = new char*[arrcapacity];
	for (int i = 0; i <arrcapacity; i++)
	{
		map[i] = new char[arrcapacity];
		for (int j = 0; j < arrcapacity; j++)
		{
				map[i][j] = '.';
		}
	}	
}

Mapa::~Mapa()
{
	for (int i = 0; i < arrcapacity; i++)
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
	for (int i = 0; i != arrcapacity; i++)
	{
		for (int j = 0; j != arrcapacity; j++)
		{
			std::cout << map[i][j] ;
		}
		std::cout << std::endl;
	}
}
