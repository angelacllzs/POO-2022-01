#pragma once
#include "Movimiento.h"

class CRazaAlfa : public CMovimiento{

public:
	CRazaAlfa(int x, int y) : CMovimiento(x, y){
		dy = rand() % 2 + 1;
		ancho = 22; //EDITAR LUEGO DE DIBUJAR
		alto = 6; //EDITAR LUEGO DE DIBUJAR
	}
	~CRazaAlfa(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "                     ";
		Console::SetCursorPosition(x, y + 1); cout << "                     ";
		Console::SetCursorPosition(x, y + 2); cout << "                     ";
		Console::SetCursorPosition(x, y + 3); cout << "                     ";
		Console::SetCursorPosition(x, y + 4); cout << "                     ";
		Console::SetCursorPosition(x, y + 5); cout << "                     ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << "       _.---._       ";
		Console::SetCursorPosition(x, y + 1); cout << "        |   |        ";
		Console::SetCursorPosition(x, y + 2); cout << "       '     '       ";
		Console::SetCursorPosition(x, y + 3); cout << " _.-~===========~-._ ";
		Console::SetCursorPosition(x, y + 4); cout << "(___________________)";
		Console::SetCursorPosition(x, y + 5); cout << "     \_________/     ";
	}
};