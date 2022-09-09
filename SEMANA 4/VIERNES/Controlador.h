#pragma once
#include "Persona.h"
#include "Carro.h"
#include "Bus.h"
#include "Bicicleta.h"
#include <vector>

class CControlador{
private:
	CPersona* persona;
	vector<CCarro*> vecCarro;
	vector<CBus*> vecBus;
	vector<CBicicleta*> vecBicicleta;

public:
	CControlador(){
		persona = new CPersona(40, 58);
		for (int i = 0; i < 2; i++){
			vecCarro.push_back(new CCarro());
			vecBus.push_back(new CBus());
			vecBicicleta.push_back(new CBicicleta());
		}
	}
	~CControlador(){}

	void borrarTodo() {
		persona->borrar();
		for (int i = 0; i < vecBus.size(); i++){
			vecBus[i]->borrar();
		}
		for (int i = 0; i < vecCarro.size(); i++){
			vecCarro[i]->borrar();
		}
		for (int i = 0; i < vecBicicleta.size(); i++) {
			vecBicicleta[i]->borrar();
		}
	}

	void moverTodo() {
		for (int i = 0; i < vecBus.size(); i++) {
			vecBus[i]->moverTransporte();
		}
		for (int i = 0; i < vecCarro.size(); i++) {
			vecCarro[i]->moverTransporte();
		}
		for (int i = 0; i < vecBicicleta.size(); i++) {
			vecBicicleta[i]->moverTransporte();
		}
	}

	void dibujarTodo() {
		persona->dibujar();
		for (int i = 0; i < vecBus.size(); i++) {
			vecBus[i]->dibujar();
		}
		for (int i = 0; i < vecCarro.size(); i++) {
			vecCarro[i]->dibujar();
		}
		for (int i = 0; i < vecBicicleta.size(); i++) {
			vecBicicleta[i]->dibujar();
		}
	}

	CPersona* getPersona() { return persona; }
};