#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class CMovimiento{
protected:
	int x, y;
	int dy;
	int ancho, alto;

public:
	CMovimiento(int x, int y){
		this->x = x;
		this->y = y;
	}
	~CMovimiento(){}

	void moverOvni() {
		if (y + dy <= 0 || y + dy + alto >= 50) dy *= -1;
		y += dy;
	}
};