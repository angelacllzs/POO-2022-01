#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class CPersona{
private:
	string nombre;
	int edad;
	int dni;
	char sexo;
	double peso;
	double altura;

public:
	CPersona(){
		nombre = " ";
		edad = 0;
		dni = 0;
		sexo = 'H';
		peso = 0.0;
		altura = 0.0;
	}

	CPersona(string nombre, int edad, char _sexo) {
		this->nombre = nombre;
		this->edad = edad;
		sexo = _sexo;
		generarDNI();
		peso = 0.0;
		altura = 0.0;
	}

	CPersona(string nombre, int edad, char _sexo, double peso, double altura) {
		this->nombre = nombre;
		this->edad = edad;
		sexo = _sexo;
		generarDNI();
		this->peso = peso;
		this->altura =altura;
	}

	~CPersona(){}

//---------SET Y GET---------
	string getNombre() { return nombre; } //GETs RETURN VALORES

	void   setNombre(string nombre) { this->nombre = nombre; } //SETs EDITAN VALORES

//---------METODOS O FUNCIONES---------
	int calcularIMC() {
		double pesoIdeal;

		pesoIdeal = peso / (pow(altura,2)); // (altura*altura)

		if (pesoIdeal < 20) {
			return -1;
		}
		else {
			if (pesoIdeal >= 20 && pesoIdeal <= 25) {
				return 0;
			}
			else {
				return 1;
			}
		}
	}

	bool esMayordeEdad() {
		if (edad >= 18) {
			return true;
		}
		else {
			return false;
		}
	}

	void comprobarSexo(char sexo) {
		if (sexo != 'H' && sexo != 'M') {
			this->sexo = 'H';
			cout << "Las opciones para llenar son H: hombre; M: mujer" << endl;
		}
		else{
			cout << "Se completo el sexo de manera correcta" << endl;
		}
	}

	void devolverInfo() {
		cout << "INFORMACION DE LAS PERSONAS" << endl;
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: "   << edad << endl;
		cout << "DNI: "    << dni << endl;
		cout << "Sexo: "   << sexo << endl;
		cout << "Peso: "   << peso << endl;
		cout << "Altura: " << altura << endl;
	}

	void generarDNI() {
		dni = 10000000 + rand() % 999999999;
	}
};