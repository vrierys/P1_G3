#include"Player.h"
#include"coinmanager.h"
#include"Map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
void main()
{
	srand(time(NULL));
	clock_t start = clock();
	int lvldif;
	int maxcoin;
	Input::Key tecla;
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
	std::cin >> lvldif;
	maxcoin = 30 - lvldif + rand() % (30 * lvldif * 2 - 30 * lvldif);
	Mapa mimapa(lvldif);
	coinmanger manager(mimapa);
	Player player(mimapa, manager);
	system("cls");
	mimapa.print();
	do
	{
		tecla = Input::getKey();
		player.move(tecla);
		system("cls");
		mimapa.print();
		std::cout << "Puntuacion " << player.puntuacion << "/" << maxcoin << std::endl;
	} while (maxcoin != player.puntuacion);
	std::cout << player.puntuacion << " " << (clock() - start) / 1000 << std::endl;
}