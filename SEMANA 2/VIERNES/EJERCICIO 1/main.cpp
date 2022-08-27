#include "Persona.h"

using namespace std;

int main(){
	srand(time(NULL));
	CPersona* persona1;
	CPersona* persona2;
	CPersona* persona3;

//---------PRIMERA PERSONA--------
	persona1 = new CPersona("Jesus", 23, 'H');

	persona1->devolverInfo();

	cout << "El resultado del IMC es: " << persona1->calcularIMC() << endl;
	cout << "La persona es mayor de edad?: " << persona1->esMayordeEdad() << endl;

//---------SEGUNDA PERSONA--------
	persona2 = new CPersona("Jesus", 16, 'H', 85.5, 1.83);
	persona2->devolverInfo();
	cout << "El resultado del IMC es: " << persona2->calcularIMC() << endl;
	cout << "La persona es mayor de edad?: " << persona2->esMayordeEdad() << endl;

//---------TERCERA PERSONA---------
	persona3 = new CPersona();
	persona3->setNombre("Juan");

	//persona3->devolverInfo();
	cout << persona3->getNombre();

	_getch();
	return 0;
}