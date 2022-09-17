#pragma once
#include "Movimiento.h"

class CRazaBeta : public CMovimiento{

public:
	CRazaBeta(int x, int y) : CMovimiento(x,y){
		dy = rand() % 3 + 1;
		ancho = 12; //EDITAR LUEGO DE DIBUJAR
		alto = 3;
	}
	~CRazaBeta(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "           ";
		Console::SetCursorPosition(x, y + 1); cout << "           ";
		Console::SetCursorPosition(x, y + 2); cout << "           ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << "   .---.   ";
		Console::SetCursorPosition(x, y + 1); cout << " _/__~0_\_ ";
		Console::SetCursorPosition(x, y + 2); cout << "(_________)";
	}

};