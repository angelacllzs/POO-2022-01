#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string tiposEclipses[2] = { "Solar", "Lunar" };
string visibilidades[5] = { "America del Sur", "Europa", "Africa", "America del Norte", "Asia" };

class CEclipse{
private:
	string tipoEclipse;
	string fecha; // dd/mm/aa
	int hora;
	bool sismos;
	bool lluvias;
	string visibilidad;

public:
	CEclipse(string fecha){
		tipoEclipse = tiposEclipses[rand() % 2];
		this->fecha = fecha;
		hora = 100 * (1 + rand() % 24);
		sismos = rand() % 2;
		lluvias = rand() % 2;
		visibilidad = visibilidades[rand() % 5];
	}
	~CEclipse(){}

//---------GETs Y SETs-------------
	string getVisibilidad() { return visibilidad; }
	bool getSismos() { return sismos; }
	int getHora() { return hora; }

	void setTipoEclipse(string tipoEclipse) { this->tipoEclipse = tipoEclipse; }

//----------DATO ECLIPSE---------
	void datosEclipse() {
		cout << "Tipo eclipse: " << tipoEclipse <<endl;
		cout << "Fecha: " << fecha <<endl;
		cout << "Hora: " << hora <<endl;
		cout << "Sismo: " << sismos <<endl;
		cout << "Lluvia: " << lluvias <<endl;
		cout << "Visibilidad: " << visibilidad <<endl;
	}
};