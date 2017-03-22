#pragma once
#include "Map.h"
class coinmanager
{
public:
	coinmanager(Mapa a);
	~coinmanager();
	void coingen();
	void coindelete();
private:
	Mapa &mimapa;
};