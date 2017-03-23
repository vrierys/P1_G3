#pragma once
#include "Map.h"
class coinmanager
{
public:
	coinmanager(Mapa a);
	void coindelete();
private:
	Mapa &mimapa;
	int cant;
};