#include "ListaCola.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

ListaCola::ListaCola(){
	this->head = 0;
	this->tail = 0;
}

void ListaCola::printListaCola(){
	Nodo *iterador;
	iterador = this->head;
	
	while(iterador != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}

void ListaCola::pushfront(int _key){
	if (head==NULL)
   {
    cout<<"la lista esta vacia"<<endl;
   }
   Nodo *nuevoNodo = new Nodo(_key);
   int dato = head->key;
   head->next = head;
   head = nuevoNodo;
   
   if(this->tail == NULL){
   		this->tail = head;
   }

}