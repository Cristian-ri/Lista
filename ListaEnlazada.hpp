#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Nodo.hpp"

class ListaEnlazada{
	public:
		ListaEnlazada();
		void pushFront(int);
		void printListaEnlazada();
		void pushBack(int);
		int popFront();
		bool Empty();
		
	
	private:
		Nodo *head;	
};