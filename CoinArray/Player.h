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
	int puntuacion;
	Mapa mymapa;
	coinmanger &micoinmanager;
	int fila;
	int column;


private:
	
};