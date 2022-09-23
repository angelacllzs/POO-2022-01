#pragma once
#include "Movimiento.h"

class CCarro : public CMovimiento{
public:
	CCarro() : CMovimiento() {
		dx = rand() % 3 + 2;
		ancho = 8;
		alto = 3;
	}
	~CCarro(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "       ";
		Console::SetCursorPosition(x, y + 1); cout << "       ";
		Console::SetCursorPosition(x, y + 2); cout << "       ";
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x, y);     cout << " __|~\_";
		Console::SetCursorPosition(x, y + 1); cout << "[__|_|-";
		Console::SetCursorPosition(x, y + 2); cout << "(_) (_) ";
	}
};