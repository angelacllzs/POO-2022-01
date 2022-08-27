#include "Persona.h"

using namespace std;

int main() {
	srand(time(NULL));
	CPersona* persona1;
	CPersona* persona2;
	CPersona* persona3;
	char sexo;

//--------PRIMERA PERSONA-------
	persona1 = new CPersona("Jesus", 23, 'H', 85.5, 1.83);
	persona1->devolverInfo();
	cout << "El resultado del IMC es: " << persona1->calcularIMC() << endl;
	cout << "La persona es mayor de edad?: " << persona1->esMayordeEdad() << endl;
	
	/*cout << "Ingrese el sexo (H o M)" << endl;
	cin >> sexo;
	persona1->comprobarSexo(sexo);*/
	
//---------SEGUNDA PERSONA--------
	persona2 = new CPersona("Juan", 23, 'H');
	persona2->devolverInfo();
	cout << "El resultado del IMC es: " << persona2->calcularIMC() << endl;
	cout << "La persona es mayor de edad?: " << persona2->esMayordeEdad() << endl;

//---------TERCERA PERSONA--------
	persona3 = new CPersona();
	persona3->setNombre("Alex");

	persona3->devolverInfo();
	_getch();
	return 0;
}