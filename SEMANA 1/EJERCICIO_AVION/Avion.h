#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class CAvion{
private:
	int x, y;
	int dx, dy;
	int ancho, alto;

public:
	CAvion(){
		x = rand() % 15 + 1;
		y = 1 + rand() % 15;
		dx = 2;
		dy = 2;
		ancho = 18; //TENER EN CUENTA QUE EDITAMOS CUANDO DIBUJAMOS MAS ABAJO!!!
		alto = 2;
	}
	~CAvion(){}

//METODOS O FUNCIONES BORRAR/MOVER/DIBUJAR

	void dibujar() {
		Console::SetCursorPosition(x, y);   cout << "       _|_       ";
		Console::SetCursorPosition(x, y+1); cout << "-----oo(_)oo-----";
	}

	void borrar() {
		Console::SetCursorPosition(x, y);   cout << "                 ";
		Console::SetCursorPosition(x, y+1); cout << "                 ";
	}

	void mover(char key) {
		switch (key){
		case 'A':
			if (x >= 2)x -= dx;
			break;
		case 'D':
			if (x + ancho <= 100)x += dx;
			break;
		case 'W':
			if (y >= 2)y -= dy;
			break;
		case 'S':
			if (y + alto <= 60) y += dy;
			break;
		}
	}
};