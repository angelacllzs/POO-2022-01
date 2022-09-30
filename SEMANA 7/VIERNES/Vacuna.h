#pragma once
#include "Caracter.h"

class CVacuna : public CCaracter{
private:
	int tipoMov;

public:
	CVacuna() : CCaracter(){
		dx = rand() % 3 + 1;
		dy = rand() % 3 + 1;
		ancho = 5;
		alto = 1;
		tipoMov = rand() % 2;
	}
	~CVacuna(){}

	void borrar() {
		Console::SetCursorPosition(x, y); cout << "    ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y); cout << "|->|";
	}

	void mover() {
		if (tipoMov == 0) { //MOV HORIZONTAL
			if (x + dx <= 0 || x + dx + ancho >= 70) dx *= -1;
			x += dx;
		}
		if (tipoMov == 1) { //MOV VERTICAL
			if (y + dy <= 0 || y + dy + alto >= 50) dy *= -1;
			y += dy;
		}
	}
};