#pragma once
#include "Ingredientes.h"
#include <vector>

using namespace std;

string nombrePastel[2] = { "Selva negra", "Torta helada" };

class CPastel{
private:
	string nombreP;
	int cantidadPersonas;
	double precio;
	vector<CIngredientes*> ingredientes;

public:
	CPastel(){
		nombreP = nombrePastel[rand() % 2];
		cantidadPersonas = rand() % 12 + 3;
		precio = rand() % 40 + 20;
	}
	~CPastel(){}

	int getCantidadPersonas() { return cantidadPersonas; }

	void agregarIngrediente() {
		CIngredientes* objIngrediente = new CIngredientes();
		ingredientes.push_back(objIngrediente);
	}

	void datoPastel() {
		cout << "Nombre del pastel: " << nombreP << endl;
		cout << "Cantidad personas: " << cantidadPersonas << endl;
		cout << "Precio: " << precio << endl;
		for (int i = 0; i < ingredientes.size(); i++){
			ingredientes[i]->datoIngredientes();
		}
	}

	int contarIngredientes() {
		return ingredientes.size();
	}

	double caloriasPastel() {
		for (int i = 0; i < ingredientes.size(); i++){
			return ingredientes[i]->getCaloriasPorcion() * getCantidadPersonas();
		}
	}
};