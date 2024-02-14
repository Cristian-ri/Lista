#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada(){
	this->head = 0;
}

void ListaEnlazada::pushFront(int _key){
	Nodo *nuevoNodo = new Nodo(_key);
	nuevoNodo->next = this->head;
	this->head  = nuevoNodo;
}

void ListaEnlazada::printListaEnlazada(){
	Nodo *iterador;
	iterador = this->head;
	
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
   this->head = head->next;
   return dato;
}

void ListaEnlazada::pushBack(int _key){
	
	Nodo *nuevoNodo  = new Nodo(_key);
	Nodo *iterador  = this->head;
	
	if(head != NULL){
		while(iterador->next != NULL){
			iterador = iterador->next;
		}
		//Al salir del while, se encuentra el último.
		iterador->next = nuevoNodo;
	}
}

bool ListaEnlazada::Empty(){
	return this->head == 0;
}