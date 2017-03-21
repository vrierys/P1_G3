#pragma once
class Mapa
{
public:
	Mapa(int lvldif);
	~Mapa();
	void modificator(int x, int y, char a);
	void print();
	int numfilas;
	int numcolums;
private:
	char **map;
};
