#include "Player.h"
#include <iostream>
Player::Player(Mapa a, coinmanager b):mymapa(a) , micoinmanager(b)
{
	mymapa = a;
	x = 0;
	y = 0;
	puntuacion = 0;
	mymapa.modificator(x, y, '@');
}


void Player::move(Input::Key a)
{
	switch (a)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W:
		if (y != 0)
		{
			y--;
			comprobarmoneda();
			mymapa.modificator(x, y, '@');
		}
		break;
	case Input::Key::A:
		if (x != 0)
		{
			x--;
			comprobarmoneda();
			mymapa.modificator(x, y, '@');
		}
		
		break;
	case Input::Key::S:
		if (y != mymapa.arrcapacity)
		{
			y++;
			comprobarmoneda();
			mymapa.modificator(x, y, '@');
		}
		
		break;
	case Input::Key::D:
		if (x != mymapa.arrcapacity)
		{
			x++;
			comprobarmoneda();
			mymapa.modificator(x, y, '@');
		}
		
		break;
	case Input::Key::ENTER:
		break;
	case Input::Key::ESC:
		break;
	}
}



void Player::comprobarmoneda()
{
	if (mymapa.map[x][y]=='$')
	{
		micoinmanager.coindelete();
		puntuacion++;
	}
}
