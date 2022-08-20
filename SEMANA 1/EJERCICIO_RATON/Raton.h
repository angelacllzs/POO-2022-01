#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class CRaton{
private:
	int x, y;
	int dx, dy;
	int ancho, alto;

public:
	CRaton(){
		x = rand() % 15 + 1;
		y = 1 + rand() % 15;
		dx = 2;
		dy = 2;
		ancho = 20; //TENER EN CUENTA QUE EDITAMOS CUANDO DIBUJAMOS MAS ABAJO!!!
		alto = 3;
	}
	~CRaton(){}

//METODOS O FUNCIONES BORRAR/MOVER/DIBUJAR

	void dibujar() {
		if (dx > 0) {
			Console::SetCursorPosition(x, y);     cout << "     ____()()   ";
			Console::SetCursorPosition(x, y + 1); cout << "    /       @@  ";
			Console::SetCursorPosition(x, y + 2); cout << "~~~~\\_;m__m._>o";
		}
		else {
			if (dx < 0) {
				Console::SetCursorPosition(x, y);     cout << "     ()()_____     ";
				Console::SetCursorPosition(x, y + 1); cout << "    @@        \    ";
				Console::SetCursorPosition(x, y + 2); cout << "   o<_.m__m;_//~~~~";
			}
		}
	}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "                   ";
		Console::SetCursorPosition(x, y + 1); cout << "                   ";
		Console::SetCursorPosition(x, y + 2); cout << "                   ";
	}

	void mover() {
		if (x + ancho + dx > 100 || x + dx < 0) dx *= -1; //REBOTE IZQUIERDA-DERECHA
		if (y + alto + dy > 30 || y + dy < 0)dy *= -1; //REBOTE ARRIBA-ABAJO
		x += dx;
		y += dy;
	}
};		