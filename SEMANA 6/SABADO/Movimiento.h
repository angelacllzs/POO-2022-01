#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class CMovimiento{
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;

public:
	CMovimiento(){ //POS RANDOM DE TRANSPORTES
		x = rand() % 50 + 15;
		y = rand() % 30 + 5;
	}
	CMovimiento(int x, int y){ //POS PARA PERSONA
		this->x = x;
		this->y = y;
	}
	~CMovimiento(){}

	int getX() { return x; }
	int getY() { return y; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }

	void moverTransporte() {
		if (x + dx <= 3 || x + dx + ancho >= 100) dx *= -1;
		x += dx;
	}
};