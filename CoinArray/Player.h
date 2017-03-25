#pragma once
#include "Map.h"
#include "coinmanager.h"
#include "Input.h"
class Player
{
public:
	Player(Mapa a, coinmanager b);
	void move(Input:: Key a);
	void comprobarmoneda();
	int puntuacion;

private:
	Mapa &mimapa;
	coinmanager &micoinmanager;
	int x;
	int y;
};