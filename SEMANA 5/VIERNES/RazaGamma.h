#pragma once
#include "Movimiento.h"

class CRazaGamma : public CMovimiento{

public:
	CRazaGamma(int x, int y) : CMovimiento(x, y){
		dy = rand() % 4 + 1;
		ancho = 20;
		alto = 9;
	}
	~CRazaGamma(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "                   ";
		Console::SetCursorPosition(x, y + 1); cout << "                   ";
		Console::SetCursorPosition(x, y + 2); cout << "                   ";
		Console::SetCursorPosition(x, y + 3); cout << "                   ";
		Console::SetCursorPosition(x, y + 4); cout << "                   ";
		Console::SetCursorPosition(x, y + 5); cout << "                   ";
		Console::SetCursorPosition(x, y + 6); cout << "                   ";
		Console::SetCursorPosition(x, y + 7); cout << "                   ";
		Console::SetCursorPosition(x, y + 8); cout << "                   ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << "         .         ";
		Console::SetCursorPosition(x, y + 1); cout << "         |         ";
		Console::SetCursorPosition(x, y + 2); cout << "     .-''^''-.     ";
		Console::SetCursorPosition(x, y + 3); cout << "  ,,./_....._\.,,  ";
		Console::SetCursorPosition(x, y + 4); cout << " .-             -. ";
		Console::SetCursorPosition(x, y + 5); cout << "(  000  000  000  )";
		Console::SetCursorPosition(x, y + 6); cout << " '-.,__________,.-'";
		Console::SetCursorPosition(x, y + 7); cout << "     /        \    ";
		Console::SetCursorPosition(x, y + 8); cout << "   _/          \_  ";

	}
};