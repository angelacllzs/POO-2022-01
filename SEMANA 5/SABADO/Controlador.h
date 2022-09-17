#pragma once
#include "RazaAlfa.h"
#include "RazaBeta.h"
#include "RazaGamma.h"
#include <vector>

class CControlador{
private:
	vector<CRazaAlfa*> vecRazaAlfa;
	vector<CRazaBeta*> vecRazaBeta;
	vector<CRazaGamma*> vecRazaGamma;

public:
	CControlador(){}
	~CControlador(){}

	int getSizeAlfa() { return vecRazaAlfa.size(); }
	int getSizeBeta() { return vecRazaBeta.size(); }

	int totalOvnis() { return vecRazaAlfa.size() + vecRazaBeta.size() + vecRazaGamma.size(); }

	void agregarAlfa() {
		CRazaAlfa* objRazaAlfa = new CRazaAlfa(1, 5);
		vecRazaAlfa.push_back(objRazaAlfa);
	}

	void agregarBeta() {
		//CRazaBeta* objRazaBeta = new CRazaBeta(40, 5);
		vecRazaBeta.push_back(new CRazaBeta(40, 5));
	}

	void agregarGamma() {
		CRazaGamma* objRazaGamma = new CRazaGamma(90, 5);
		vecRazaGamma.push_back(objRazaGamma);
	}

	void borrarTodo() {
		for (int i = 0; i < vecRazaAlfa.size(); i++){
			vecRazaAlfa[i]->borrar();
		}
		for (int i = 0; i < vecRazaBeta.size(); i++) {
			vecRazaBeta[i]->borrar();
		}
		for (int i = 0; i < vecRazaGamma.size(); i++) {
			vecRazaGamma[i]->borrar();
		}
	}

	void moverTodo() {
		for (int i = 0; i < vecRazaAlfa.size(); i++) {
			vecRazaAlfa[i]->moverOvni();
		}
		for (int i = 0; i < vecRazaBeta.size(); i++) {
			vecRazaBeta[i]->moverOvni();
		}
		for (int i = 0; i < vecRazaGamma.size(); i++) {
			vecRazaGamma[i]->moverOvni();
		}
	}

	void dibujarTodo() {
		for (int i = 0; i < vecRazaAlfa.size(); i++) {
			vecRazaAlfa[i]->dibujar();
		}
		for (int i = 0; i < vecRazaBeta.size(); i++) {
			vecRazaBeta[i]->dibujar();
		}
		for (int i = 0; i < vecRazaGamma.size(); i++) {
			vecRazaGamma[i]->dibujar();
		}
	}
};