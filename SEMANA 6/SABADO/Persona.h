#pragma once
#include "Movimiento.h"

class CPersona : public CMovimiento{
public:
	CPersona(int x, int y) : CMovimiento(x, y){
		dx = 2;
		dy = 2;
		ancho = 2; //EDITAR LUEGO DE DIBUJAR
		alto = 2;
	}
	~CPersona(){}

	void moverPersona(char key) {
		switch (key){
		case 'A':
			if (x >= 3)x -= dx;
			break;
		case 'D':
			if (x + dx + ancho <= 100) x += dx;
			break;
		case 'W':
			if (y >= 3) y -= dy;
			break;
		case 'S':
			if (y + dy + alto <= 50) y += dy;
			break;
		}
	}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << " ";
		Console::SetCursorPosition(x, y + 1); cout << " ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << "@";
		Console::SetCursorPosition(x, y + 1); cout << char(197);
	}
};