#include "Player.h"
Player::Player(Mapa a, coinmanager b) : mimapa(a),micoinmanager(b)
{
	x = 0;
	y = 0;
	puntuacion = 0;
	mimapa.map[x][y] = '@';
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
			mimapa.map[x][y] = '@';
		}
		break;
	case Input::Key::A:
		if (x != 0)
		{
			x--;
			comprobarmoneda();
			mimapa.map[x][y] = '@';
		}
		
		break;
	case Input::Key::S:
		if (y != mimapa.numfilas)
		{
			y++;
			comprobarmoneda();
			mimapa.map[x][y] = '@';
		}
		
		break;
	case Input::Key::D:
		if (x != mimapa.numcolums)
		{
			x++;
			comprobarmoneda();
			mimapa.map[x][y] = '@';
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
	if (mimapa.map[x][y]=='$')
	{
		micoinmanager.coindelete();
		puntuacion++;
	}
}
