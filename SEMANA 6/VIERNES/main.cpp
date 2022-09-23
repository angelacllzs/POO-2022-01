#include "Controlador.h"

int main() {
	srand(time(NULL));
	Console::CursorVisible = false;
	int tiempo = 300;
	char key;
	CControlador* objControlador = new CControlador();

	while (true){
		Console::ForegroundColor = ConsoleColor::Cyan;
		Console::SetCursorPosition(15, 50); cout << "                ";
		Console::SetCursorPosition(15, 50); cout << "Tiempo: " << tiempo/10;
		objControlador->borrarTodo();
		if (objControlador->colisionCarro()) break;
		if (objControlador->colisionBus()) break;
		objControlador->colisionBici();

		if (_kbhit()) {
			key = _getch();
			key = toupper(key);
			objControlador->getPersona()->moverPersona(key);
		}

		objControlador->moverTodo();
		objControlador->dibujarTodo();

		_sleep(100);
		tiempo--;
		if (tiempo == 0) break;
	}
	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(40, 40); cout << "           ";
	Console::SetCursorPosition(40, 40); cout << "PERDISTE :(";

	_getch();
	return 0;
}