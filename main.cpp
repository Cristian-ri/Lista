#include "ListaEnlazada.hpp"

int main(int argc, char** argv) 
{
	ListaEnlazada l1;
	l1.pushFront(6);
	l1.pushFront(7);
	l1.pushFront(5);
	l1.pushFront(14);
	l1.pushFront(78);
	l1.printListaEnlazada();
	cout<<"**********************"<<endl;
	l1.pushBack(99);
	l1.printListaEnlazada();
	cout<<"**********************"<<endl;
	l1.popFront();
	l1.popFront();
	l1.printListaEnlazada();
	l1.Empty();
	
	return 0;
}