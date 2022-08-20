#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class CNube{
private:
	int x, y;
	int dx;
	int ancho, alto;

public:
	CNube(){
		x = rand()% 18 + 1;
		y = 1;
		dx = 2;
		ancho = 16;  //TENER EN CUENTA QUE EDITAMOS CUANDO DIBUJAMOS MAS ABAJO!!!
		alto = 4;
	}
	~CNube(){}

//METODOS O FUNCIONES BORRAR/MOVER/DIBUJAR

	void dibujar() {
		Console::SetCursorPosition(x, y);   cout << "    __     _   ";
		Console::SetCursorPosition(x, y+1); cout << "  _(  )___( )_ ";
		Console::SetCursorPosition(x, y+2); cout << " (_ ____  ____)";
		Console::SetCursorPosition(x, y+3); cout << "  (_)  (__)    ";
	}

	void borrar() {
		Console::SetCursorPosition(x, y);   cout << "               ";
		Console::SetCursorPosition(x, y+1); cout << "               ";
		Console::SetCursorPosition(x, y+2); cout << "               ";
		Console::SetCursorPosition(x, y+3); cout << "               ";
	}

	void mover() {
		if (x + dx < 0 || x + ancho + dx > 100)dx *= -1;
		x += dx;
	}
};