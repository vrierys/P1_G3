#pragma once
#include <iostream>
class Mapa
{
public:
	Mapa(int dif);
	~Mapa();
	void modificador(int x, int y, char simbol);
	void print();
	int numfilas;
	int numcolums;
	char **md;

private:

};