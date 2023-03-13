#include "Nodo.hpp"

Nodo::Nodo(){
	this->key = 0;
	this->next = 0;
}

Nodo::Nodo(int _key){
	this->key = _key;
	this->next = 0;
}