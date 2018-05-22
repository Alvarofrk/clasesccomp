#include <iostream>
#include "Arreglo.h"
#include <stdlib.h>

using namespace std;


int main() {

	Arreglo a1(3);
	a1.data[0] = 4;
	a1.data[1] = 5;
	a1.data[2] = 6;

	//a1.insertar();
	//a1.eliminar();
	a1.vaciar();
	//a1.reemplazar();
	
	a1.mostrar();
	




	system("pause");
	//cin.get();
	return 0;
}
