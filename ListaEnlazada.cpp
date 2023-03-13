#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada(){
	head = 0;
}

void ListaEnlazada::pushFront(int key){
	Nodo *nuevoNodo = new Nodo(key);
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
   int dato=head->key;
   head=head->next;
   return dato;
}