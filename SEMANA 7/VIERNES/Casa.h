#pragma once
#include "Caracter.h"

class CCasa : public CCaracter{
public:
	CCasa(int x, int y) : CCaracter(x, y){
		ancho = 11;
		alto = 4;
	}
	~CCasa(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "          ";
		Console::SetCursorPosition(x, y + 1); cout << "          ";
		Console::SetCursorPosition(x, y + 2); cout << "          ";
		Console::SetCursorPosition(x, y + 3); cout << "          ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << "  __I_    ";
		Console::SetCursorPosition(x, y + 1); cout << " /\-_--\  ";
		Console::SetCursorPosition(x, y + 2); cout << "/  \_-__\ ";
		Console::SetCursorPosition(x, y + 3); cout << "|[]| [] | ";
	}
};