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

	//Impresión de la interfaz del juego. Se muestran los controles y se le pide al jugador un nivel de dificultad.
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "********************                          ********************" << std::endl;
	std::cout << "********************        Coin Race         ********************" << std::endl;
	std::cout << "********************                          ********************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "******************************************************************" << std::endl;
	std::cout << "Controles:" << std::endl;
	std::cout << "W mover al jugador hacia arriba y S mover al jugador hacia  abajo, " << std::endl;
	std::cout << "A mover al jugador hacia la izquierda y D mover al jugador hacia la Derecha" << std::endl;
	std::cout << "ESC para cerrar juego" << std::endl;
	std::cout << "Selecciona tu nivel de dificultad:" << std::endl;
	std::cout << "1 = Facil, 2 = Medio , 3 = Dificil" << std::endl;
	std::cin >> lvldif;

	//Número de monedas necesarias para terminar la partida.
	maxcoin = 30 - lvldif + rand() % (30 * lvldif * 2 - 30 * lvldif);

	//Creamos el mapa y llamamos a las demás clases.
	Mapa mimapa(lvldif);
	coinmanger manager(mimapa);
	Player player(mimapa, manager);
	system("cls");
	//Imprimimos el mapa.
	mimapa.print();

	//Creamos el juego.
	do 
	{
		tecla = Input::getKey();
		if (tecla!= Input::Key::NONE)
		{
			system("cls");
			player.move(tecla);
			mimapa.print();
			std::cout << "Puntuacion " << player.puntuacion << "/" << maxcoin << std::endl;
		}
	} while (maxcoin != player.puntuacion);
	
	//Mostramos la puntuación y el tiempo en pantalla.
	std::cout << "Puntuacion:" << player.puntuacion << " Tiempo:" << (clock() - start) / 1000 << std::endl;
	std::cout << "Presione Esc para salir" << std::endl;
	
	do
	{
		tecla = Input::getKey();
	} while (tecla!= Input::Key::ESC);
	
}