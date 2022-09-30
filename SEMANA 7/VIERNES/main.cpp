#include "Controlador.h"

int main() {
	srand(time(NULL));
	Console::CursorVisible = false;
	int tiempo = 600;
	int cantVirus;
	char key;
	CControlador* objControlador;

	cout << "Ingrese una cantidad de virus a mostrar: "; cin >> cantVirus;
	objControlador = new CControlador(cantVirus);
	Console::Clear();

	while (tiempo != 0){
		Console::SetCursorPosition(1, 0); cout << "              ";
		Console::SetCursorPosition(1, 0); cout << "Tiempo: " << tiempo / 10;
		Console::SetCursorPosition(1, 1); cout << "                   ";
		Console::SetCursorPosition(1, 1); cout << "Inmunidad: " << objControlador->getPersona()->getInmunidad();
		Console::SetCursorPosition(1, 2); cout << "                   ";
		Console::SetCursorPosition(1, 2); cout << "Vida: " << objControlador->getPersona()->getVida();

		objControlador->borrarTodo();
		if (tiempo % 100 == 0)objControlador->agregarVacuna(); //AGREGAMOS VACUNA CADA 10 SEGUNDOS
		if (objControlador->personaColisionVirus())break; //objControlador->personaColisionVirus() == true
		objControlador->personaColisionVacuna();
		if (objControlador->getPersona()->getCantMov() < 0) {
			objControlador->getPersona()->setInmunidad(false);
		}
		if (objControlador->personaColisionCasa())break; //objControlador->personaColisionCasa() == true

		if (_kbhit()) {
			key = _getch();
			key = toupper(key);
			objControlador->getPersona()->mover(key);
		}

		objControlador->moverTodo();
		objControlador->dibujarTodo();

		_sleep(100);
		tiempo--;
	}

	cout << "GAME OVER";

	_getch();
	return 0;
}