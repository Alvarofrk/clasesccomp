#include"Arreglo.h"

Arreglo::Arreglo(int size) {
	
	this ->size = size;
	data = new int[size];
	aux = new int[size];

	

}


void Arreglo::insertar() {
	int nElem;
	size += 1;
	cout << "ingrese en que posicion desea ingresar el nuevo elemento: "; cin >> nElem;
	
	for (int i = size-1; i >=0 ; i--) {
		
		if (i == nElem) {
			break;
		}
		data[i] = data[i - 1];
		data[i - 1] = aux[i - 1];
	}

	cout << "ingrese el elemento: "; cin >> data[nElem];
}

void Arreglo::eliminar() {
	int nElem;
	cout << "numero de elemento a eliminar: "; cin >> nElem;
		
	if (nElem == size - 1) {
		size -= 1;

	}
	else {
		for (int i = 0; i < size; i++) {
			if (i == nElem) {
				for (; i < size; i++) {
					
					data[i] = data[i + 1];
					data[i + 1] = aux[i];
				}
				size -= 1;

			}
		}
	}
	
	
}

void Arreglo::vaciar() {
	size = 1;
	data[0] = 0;
}
void Arreglo::reemplazar() {
	int nElem;
	cout << "ingresa el numero del elemento a reemplazar: "; cin >> nElem;
	cout << "ingrese el nuevo elemento : "; cin >> data[nElem];
}
void Arreglo::mostrar() {
	for (int i = 0; i<size; i++) {
		cout << data[i] << "  ";
	}
	cout << endl;
	//delete[] data;
}

Arreglo::~Arreglo() {
	//delete[] data;
	delete[] aux;
}

