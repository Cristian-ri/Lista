#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//Clase autoreferenciada
class Nodo{
	public:
		//Miembros de datos en parte publica
		int key;
		Nodo *next;
		//Funiones miembros de la clase
		Nodo(); //Constructor por defecto
		Nodo(int); //Sobrecargando constructor	
};