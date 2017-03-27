#pragma once
#include "Map.h"

class coinmanger
{
public:
	Mapa &mimap;
	coinmanger(Mapa &a);
	~coinmanger();
	void generator();
	void deletcoin();
private:
	int tam;
	int visblecoins;
	int fila, column;
	int coinstogenerate;


};
