#pragma once
#include "Ingrediente.h"
#include <vector>

string nombresPastel[2] = { "Selva negra", "Torta helada" };

class CPastel{
private:
	string nombreP;
	int cantidadPersonas;
	double precio;
	vector<CIngrediente*> ingredientes;

public:
	CPastel(){
		nombreP = nombresPastel[rand() % 2];
		cantidadPersonas = rand() % 12 + 3;
		precio = rand() % 40 + 20;
	}
	~CPastel(){}

	int getCantidadPersonas() { return cantidadPersonas; }

//----METODOS O FUNCIONES-----
	void agregarIngredientes() {
		CIngrediente* objIngrediente = new CIngrediente();
		ingredientes.push_back(objIngrediente);
	}

	void datosPastel() {
		cout << "Nombre pastel: " << nombreP << endl;
		cout << "Cantidad de personas: " << cantidadPersonas << endl;
		cout << "Precio: S/." << precio << endl;
		cout << "Cantidad letras pastel: " << nombreP.length() << endl; //IDEA VALERY

		for (int i = 0; i < ingredientes.size(); i++){
			ingredientes[i]->mostrarInfo();
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