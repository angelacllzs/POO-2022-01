#include "Controlador.h"

int main() {
	srand(time(NULL));
	Console::CursorVisible = false;
	char key;
	CControlador* objControlador = new CControlador();

	cout << "COMIENZA LA INVASION...!!!";

	while (objControlador->totalOvnis() != 10){
		objControlador->borrarTodo();

		if (_kbhit()) {
			key = _getch();
			key = toupper(key);
			switch (key){
			case 'A':
				objControlador->agregarAlfa();
				if (objControlador->getSizeAlfa() % 2 == 0) { objControlador->agregarBeta(); }
				if (objControlador->getSizeBeta() % 2 == 0 && objControlador->getSizeAlfa() % 4 == 0) { objControlador->agregarGamma(); }
				break;
			}
		}
		objControlador->moverTodo();
		objControlador->dibujarTodo();

		_sleep(100);
	}

	cout << "HEMOS SIDO INVADIDOS...!!!";

	_getch();
	return 0;
}