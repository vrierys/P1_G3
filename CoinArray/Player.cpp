#include "Player.h"
#include <iostream>
Player::Player(Mapa &a, coinmanger &b):mymapa(a) , micoinmanager(b)
{
	do// para que la posicion del jugador no sea el mismo que una moneda
	{
		fila = rand()%(mymapa.numfilas-1);
		column = rand() % (mymapa.numcolums-1);
		if (mymapa.md[fila][column]=='.')
		{
			mymapa.modificador(fila, column, '@');
		}
		

	} while (mymapa.md[fila][column]!='@');
	puntuacion = 0;
	
}


void Player::move(Input::Key a)
{
	switch (a)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W:
		if (fila != 0)
		{
			mymapa.modificador(fila, column, '.');
			fila--;
			comprobarmoneda();
			mymapa.modificador(fila, column, '@');
		}
		break;
	case Input::Key::A:
		if (column != 0)
		{
			mymapa.modificador(fila, column, '.');
			column--;
			comprobarmoneda();
			mymapa.modificador(fila, column, '@');
		}
		
		break;
	case Input::Key::S:
		if (fila != (mymapa.numfilas - 1))
		{
			mymapa.modificador(fila, column, '.');
			fila++;
			comprobarmoneda();
			mymapa.modificador(fila, column, '@');
		}
		
		break;
	case Input::Key::D:
		if (column != (mymapa.numcolums - 1))
		{
			mymapa.modificador(fila, column, '.');
			column++;
			comprobarmoneda();
			mymapa.modificador(fila, column, '@');
		}
		
		break;
	case Input::Key::ESC:
		exit(0);
		break;
	}
}



void Player::comprobarmoneda()
{
	if (mymapa.md[fila][column]=='$')
	{
		micoinmanager.deletcoin();
		puntuacion++;
	}
}
