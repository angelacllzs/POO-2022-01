#include "Pastel.h"

void menu() {
	cout << "1. Ingresar ingredientes al pastel" << endl;
	cout << "2. Contar ingredientes" << endl;
	cout << "3. Calcular calorias" << endl;
	cout << "4. Listar pastel" << endl;
}

int main() {
	srand(time(NULL));

	int opcion;
	CPastel* objPastel = new CPastel();

	while (true){
		menu(); cout << "Ingrese la opcion: "; cin >> opcion;

		switch (opcion){
		case 1:
			objPastel->agregarIngredientes();
			cout << "SE AGREGO" << endl;
			break;
		case 2:
			cout << "Cantidad de ingredientes es: " << objPastel->contarIngredientes() << endl;
			break;
		case 3:
			cout << "Cantidad de calorias es: " << objPastel->caloriasPastel() << endl;
			break;
		case 4:
			cout << "LISTA PASTEL" << endl;
			objPastel->datosPastel();
			break;
		}
		_getch();
		system("cls");
	}


	_getch();
	return 0;
}