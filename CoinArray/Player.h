#pragma once
#include "Map.h"
#include "coinmanager.h"
class Player
{
public:
	Player();
	~Player();
	void move();
	void comprovarmoneda(int x, int y);

private:
	Mapa mimapa;
	coinmanager micoinmanager;
	int x;
	int y;
	int puntuacion;
};