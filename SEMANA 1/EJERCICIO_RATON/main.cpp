#include "Raton.h"

int main() {
	srand(time(NULL)); //PERMITIR UN ALEATORIO DIFERENTE EN CADA COMPILACION
	Console::CursorVisible = false;

	CRaton* objRaton = new CRaton(); //ES UN OBJETO DE LA CLASE

	do{
		objRaton->borrar();
		objRaton->mover();
		objRaton->dibujar();

		_sleep(100);
	} while (!kbhit());

	_getch();
	return 0;
}