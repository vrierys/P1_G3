#include"Player.h"
#include"coinmanager.h"
#include"Map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
void main()
{
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "********************                          ********************" << std::endl;
	std::cout << "********************        Coin Race         ********************" << std::endl;
	std::cout << "********************                          ********************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "Selecciona tu nivel de dificultad:" << std::endl;
	std::cout << "1 = Facil, 2 = Medio , 3 = Dificil" << std::endl;
	int lvldif;
	std::cin >> lvldif;
	Mapa mapa(lvldif);
	coinmanager coin(mapa);
	Player player(mapa,coin);
	/*
	int maxcoin = 30 - lvldif + rand() % (30 * lvldif * 2 - 30 * lvldif);
	Input:: Key tecla;
	system("cls");
	mapa.print();
	do
	{
		tecla = Input::getKey();
		system("cls");
		player.move(tecla);
		mapa.print();
		std::cout <<"Puntuacion " <<player.puntuacion << "/" << maxcoin << std::endl;
			
	} while (maxcoin!=player.puntuacion);
	int time = clock();
	std::cout << player.puntuacion << " " << time << std::endl;*/
}