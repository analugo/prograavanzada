/*
 * ListaDoblementeEnlazada.cpp
 *
 *  Created on: 18/10/2017
 *      Author: Ana Godínez
 */

#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
	Nodo* atras;

}*primero, *ultimo;


void insertarNodo();
void desplegarListaFL(); //show the first and the last element of the list.

int main(){

	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();

	cout<<"\n Lista Primero al último\n";
	desplegarListaFL();
	cout<<"\n Lista último al Primero\n";
	desplegarListaFL();

	return 0;
}

void insertarNodo(){
	Nodo* nuevo = new Nodo();
	cout<< "Ingrese el dato que contendra el Nodo: ";
	cin>> nuevo->dato;

	if(primero ==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo =primero;

	}
	else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;

	}
	cout<< "\n Nodo ingresado\n\n";
}

void desplegarListaFL(){

	Nodo* actual = new Nodo();
	actual = ultimo;
	if(primero!= NULL){

		while(actual!= NULL){

			cout<<"\n"<< actual->dato;
			actual = actual->atras;

		}

	}else{

		cout<<"\n La lista se encuentra vacia\n\n";
	}


}


