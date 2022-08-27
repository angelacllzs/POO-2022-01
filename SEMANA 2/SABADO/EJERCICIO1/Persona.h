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

	CPersona(string nombre, int _edad, char sexo) {
		this->nombre = nombre;
		edad = _edad;
		this->sexo = sexo;
		generaDNI();
		peso = 0.0;
		altura = 0.0;
	}

	CPersona(string nombre, int edad, char sexo, double peso, double altura) {
		this->nombre = nombre;	 
		this->edad = edad;		 
		this->sexo = sexo;
		generaDNI();
		this->peso = peso;
		this->altura = altura;
	}
	~CPersona(){}

//--------SET Y GET------------------
	string getNombre() { return nombre; }
	char getSexo() { return sexo; }

	void setNombre(string nombre) { this->nombre = nombre; }
	void setSexo(char sexo) { this->sexo = sexo; }

//---------METODOS O FUNCIONES-------
	int calcularIMC() {
		double pesoIdeal;

		pesoIdeal = peso / (pow(altura, 2)); // altura*altura

		if (pesoIdeal < 20) {
			return -1;
		}
		else{
			if (pesoIdeal >= 20 && pesoIdeal <= 25) {
				return 0;
			} else {
				return 1;
			}
		}
	}

	bool esMayordeEdad() {
		if (edad >= 18) {
			return true;
		}else {
			return false;
		}
	}

	void comprobarSexo(char sexo) {
		if (sexo != 'H' && sexo != 'M') {
			this->sexo = 'H';
			cout << "Las opciones para llenar son H: hombre, M: mujer" << endl;
		}else {
			cout << "Se completo el sexo de manera correcta" << endl;
		}
	}

	void devolverInfo() {
		cout << "INFORMACION DE LAS PERSONAS" << endl;
		cout << "Nombre: " << nombre <<endl;
		cout << "Edad: " << edad <<endl;
		cout << "DNI: " << dni <<endl;
		cout << "Sexo: " << sexo <<endl;
		cout << "Peso: " << peso <<endl;
		cout << "Altura: " << altura <<endl;
	}

	void generaDNI() {
		dni = rand() % 90000000 + 10000000; //10000000 + rand()% 90000000
	}
};