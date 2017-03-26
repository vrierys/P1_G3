#pragma once
#include "Map.h"
#include "coinmanager.h"
#include "Input.h"
class Player
{
public:
	
	Player(Mapa &a, coinmanger &b);
	void move(Input:: Key a);
	void comprobarmoneda();

	Mapa &mymapa;
	coinmanger &micoinmanager;
	int puntuacion;
	int fila;
	int column;


private:
	
};