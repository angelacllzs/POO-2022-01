#include "Controlador.h"

void menu() {
	cout << "1. Agregar eclipse" << endl;
	cout << "2. Insertar eclipse en posicion" << endl;
	cout << "3. Editar eclipse en posicion" << endl;
	cout << "4. Borrar eclipse en posicion" << endl;
	cout << "5. Borrar eclipse" << endl;
	cout << "6. Listar eclipses" << endl;
	cout << "7. Reporte eclipses en Europa" << endl;
	cout << "8. Reporte eclipses que ocasionaron sismos" << endl;
	cout << "9. Reporte eclipses en la noche" << endl;
}


int main() {
	srand(time(NULL));
	int opcion, posicion;
	string fecha;
	string tipoEclipse;
	CControlador* objControlador = new CControlador();

	while (true){
		menu(); cout << "Ingrese la opcion: "; cin >> opcion;

		switch (opcion){
		case 1:
			cout << "Ingrese la fecha (dd/mm/aa): "; cin >> fecha;
			objControlador->agregarEclipse(fecha);
			cout << "SE AGREGO CON EXITO";
			break;
		case 2:
			cout << "Ingresar posicion: "; cin >> posicion;
			cout << "Ingrese la fecha (dd/mm/aa): "; cin >> fecha;
			objControlador->insertarEclipse(posicion, fecha);
			cout << "SE INSERTO CON EXITO";
			break;
		case 3:
			cout << "Ingresar posicion: "; cin >> posicion;
			cout << "Ingrese el nuevo tipo de eclipse: "; cin >> tipoEclipse;
			objControlador->editarTipoEclipse(posicion, tipoEclipse);
			cout << "SE EDITO CON EXITO";
			break;
		case 4:
			cout << "Ingresar posicion para eliminar: "; cin >> posicion;
			objControlador->borrarEclipseEnPosicion(posicion);
			cout << "SE BORRO CON EXITO";
			break;
		case 5:
			objControlador->borrarEclipse();
			cout << "SE BORRO CON EXITO";
			break;
		case 6:
			objControlador->imprimirEclipses();
			break;
		case 7:
			objControlador->eclipseVisibleEuropa();
			break;
		case 8:
			objControlador->eclipsesOcasionaronSismos();
			break;
		case 9:
			objControlador->eclipseNoche();
			break;
		}
		_getch();
		system("cls");
	}

	_getch();
	return 0;
}