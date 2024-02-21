#include "Nodo.hpp"

class ListaEnlazada{
	public:
		//Constructor por defecto
		ListaEnlazada();
		//Funciones miembros
		//Funcion ingresa un dato por enfrente
		// de la lista
		void pushFront(int);
		//Muestra la lista
		void printListaEnlazada();
		//Ingresar elemento en la parte final de la lista
		void pushBack(int);
		//Elimina datos al inicio de la lista
		int popFront();
		//Elimina datos al fian de la lista
		int popback();
		//Verifica si la lista esta vacia
		bool Empty();
		
	
	private:
		Nodo *head;	
};