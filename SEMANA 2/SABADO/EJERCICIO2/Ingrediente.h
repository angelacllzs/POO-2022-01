#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string nombresIngredientes[3] = { "Huevo", "Harina", "Vainilla" };
string unidadesMedidas[3] = { "Gramos","Kiligramos","Mililitros" };

class CIngrediente{
private:
	string nombreI;
	string unidadMedida;
	int cantidad;
	double caloriasPorcion;

public:
	CIngrediente(){
		nombreI = nombresIngredientes[rand() % 3];
		unidadMedida = unidadesMedidas[rand() % 3];
		cantidad = rand() % 9 + 1;
		caloriasPorcion = rand() % 400 + 100;
	}
	~CIngrediente(){}

	int getCaloriasPorcion() { return caloriasPorcion; }

	void mostrarInfo() {
		cout << "Nombre ingredientes: " << nombreI << endl;
		cout << "Unidad medida: " << unidadMedida << endl;
		cout << "Cantidad: " << cantidad << endl;
		cout << "Calorias por porcion: " << caloriasPorcion << endl;
	}
};