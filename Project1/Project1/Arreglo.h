
#include <iostream>
#include <string>
#include <stdlib.h>//new y delete
using namespace std;


class Arreglo {
private:
	
public:
	
	int *data;
	int size;
	int *aux;

	Arreglo(int);
	
	void insertar();
	void eliminar();
	void vaciar();
	void mostrar();
	void reemplazar();
	~Arreglo();
};