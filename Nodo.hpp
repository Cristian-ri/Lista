#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//Clase autoreferenciada
class Nodo{
	public:
		int key;
		Nodo *next;
		Nodo(); //Constructor por defecto
		Nodo(int); //Sobrecargando constructor	
};