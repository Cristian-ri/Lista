#include "Nodo.hpp"

class ListaCola{
	public:
		//Constructor
		ListaCola();
		//Funciones Miembro
		void printListaCola();
		void pushfront(int);
		void pushback(int);
	private:
		Nodo *head;
		Nodo *tail;
		
};