#pragma once
#include "Persona.h"
#include "Carro.h"
#include "Bicicleta.h"
#include "Bus.h"
#include <vector>

class CControlador{
private:
	CPersona* objPersona;
	vector<CCarro*> vecCarro;
	vector<CBus*> vecBus;
	vector<CBicicleta*> vecBicicleta;

public:
	CControlador(){
		objPersona = new CPersona(40, 50);
		for (int i = 0; i < 2; i++){
			vecCarro.push_back(new CCarro());
			vecBus.push_back(new CBus());
			vecBicicleta.push_back(new CBicicleta());
		}
	}
	~CControlador(){}

	void borrarTodo() {
		objPersona->borrar();
		for (int i = 0; i < vecCarro.size(); i++){
			vecCarro[i]->borrar();
		}
		for (int i = 0; i < vecBicicleta.size(); i++) {
			vecBicicleta[i]->borrar();
		}
		for (int i = 0; i < vecBus.size(); i++) {
			vecBus[i]->borrar();
		}
	}

	void moverTodo() {
		for (int i = 0; i < vecCarro.size(); i++) {
			vecCarro[i]->moverTransporte();
		}
		for (int i = 0; i < vecBicicleta.size(); i++) {
			vecBicicleta[i]->moverTransporte();
		}
		for (int i = 0; i < vecBus.size(); i++) {
			vecBus[i]->moverTransporte();
		}
	}

	void dibujarTodo() {
		objPersona->dibujar();
		for (int i = 0; i < vecCarro.size(); i++) {
			vecCarro[i]->dibujar();
		}
		for (int i = 0; i < vecBicicleta.size(); i++) {
			vecBicicleta[i]->dibujar();
		}
		for (int i = 0; i < vecBus.size(); i++) {
			vecBus[i]->dibujar();
		}
	}

	bool colisionCarro() {
		for (int i = 0; i < vecCarro.size(); i++){
			//OBTENIENDO Y ASIGNANDO VALORES PARA PERSONA
			int x1 = objPersona->getX(); int y1 = objPersona->getY();
			int ancho1 = objPersona->getAncho(); int alto1 = objPersona->getAlto();
			//OBTENIENDO Y ASIGNANDO VALORES PARA CARRO
			int x2 = vecCarro[i]->getX(); int y2 = vecCarro[i]->getY();
			int ancho2 = vecCarro[i]->getAncho(); int alto2 = vecCarro[i]->getAlto();
			//VALIDANDO COLISION CON DATOS ANTERIORES
			if (!(x1 + ancho1 < x2 || y1 + alto1 < y2 || x1 > x2 + ancho2 || y1 > y2 + alto2)) {
				return true;
			}
		}
	}

	bool colisionBus() {
		for (int i = 0; i < vecBus.size(); i++) {
			//OBTENIENDO Y ASIGNANDO VALORES PARA PERSONA
			int x1 = objPersona->getX(); int y1 = objPersona->getY();
			int ancho1 = objPersona->getAncho(); int alto1 = objPersona->getAlto();
			//OBTENIENDO Y ASIGNANDO VALORES PARA CARRO
			int x2 = vecBus[i]->getX(); int y2 = vecBus[i]->getY();
			int ancho2 = vecBus[i]->getAncho(); int alto2 = vecBus[i]->getAlto();
			//VALIDANDO COLISION CON DATOS ANTERIORES
			if (!(x1 + ancho1 < x2 || y1 + alto1 < y2 || x1 > x2 + ancho2 || y1 > y2 + alto2)) {
				return true;
			}
		}
	}

	void colisionBici() {
		for (int i = 0; i < vecBicicleta.size(); i++) {
			//OBTENIENDO Y ASIGNANDO VALORES PARA PERSONA
			int x1 = objPersona->getX(); int y1 = objPersona->getY();
			int ancho1 = objPersona->getAncho(); int alto1 = objPersona->getAlto();
			//OBTENIENDO Y ASIGNANDO VALORES PARA CARRO
			int x2 = vecBicicleta[i]->getX(); int y2 = vecBicicleta[i]->getY();
			int ancho2 = vecBicicleta[i]->getAncho(); int alto2 = vecBicicleta[i]->getAlto();
			//VALIDANDO COLISION CON DATOS ANTERIORES
			if (!(x1 + ancho1 < x2 || y1 + alto1 < y2 || x1 > x2 + ancho2 || y1 > y2 + alto2)) {
				objPersona->setX(40);
				objPersona->setY(50);
			}
		}
	}

	CPersona* getPersona() { return objPersona; }
};