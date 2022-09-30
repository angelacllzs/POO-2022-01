#pragma once
#include "Caracter.h"

class CPersona:public CCaracter{
private:
	int vida;
	int cantMov;
	bool inmunidad;

public:
	CPersona(int x, int y) : CCaracter(x, y){
		dx = 1;
		dy = 1;
		ancho = 2;
		alto = 2;
		inmunidad = false;
		cantMov = 0;
		vida = 3;
	}
	~CPersona(){}

	int getCantMov() { return cantMov; }
	int getVida() { return vida; }
	bool getInmunidad() { return inmunidad; }

	void disminuirVida() { vida--; }
	void setInmunidad(bool i) { inmunidad = i; }
	void setCantMov(int c) { cantMov = c; }

	void mover(char key) {
		switch (key){
		case 'A':
			if (x + dx >= 0) x -= dx;
			cantMov--;
			break;
		case 'D':
			if (x + dx + ancho <= 70) x += dx;
			cantMov--;
			break;
		case 'W':
			if (y + dy >= 0) y -= dy;
			cantMov--;
			break;
		case 'S':
			if (y + dy + alto <= 50) y += dy;
			cantMov--;
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