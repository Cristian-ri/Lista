#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada(){
	this->head = 0;
}

void ListaEnlazada::pushFront(int _key){
	Nodo *nuevoNodo = new Nodo(_key);
	nuevoNodo->next = head;
	head  = nuevoNodo;
}

void ListaEnlazada::printListaEnlazada(){
	Nodo *iterador;
	iterador = head;
	
	while(iterador != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}

int ListaEnlazada::popFront(){
    if (head==NULL)
   {
    cout<<"la lista esta vacia"<<endl;
   }
   int dato = head->key;
   head = head->next;
   return dato;
}

void ListaEnlazada::pushBack(int _key){
	
	Nodo *nuevoNodo  = new Nodo(_key);
	Nodo *iterador  = head;
	
	if(head != NULL){
		while(iterador->next != NULL){
			iterador = iterador->next;
		}
		//Al salir del while, se encuentra el último.
		iterador->next = nuevoNodo;
	}
}

bool ListaEnlazada::Empty(){
	return head == 0;
}