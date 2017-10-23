/*
 * ListaCircular.cpp
 *
 *  Created on: 18/10/2017
 *      Author: Ana Godínez
 */

#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;

}*primero, *ultimo;

void insertarNodo();
void desplegarLista();



int main(){

	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	cout<<"\n La lista circular ingresada\n";
	desplegarLista();
	return 0;
}

void insertarNodo(){

	Nodo* nuevo = new Nodo();
	cout<<"Ingrese el dato que contendra el nuevo Nodo: ";
	cin>>nuevo->dato;

	if(primero ==NULL){

		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
	}
	else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;

	}
	cout<<"\n Nodo Ingresado\n\n";
}

void desplegarLista(){
	Nodo* actual = new Nodo();
	actual = primero;
	if(primero!=NULL){
		do{
			cout<<"\n"<<actual->dato;
			actual = actual->siguiente;
		}while(actual!= primero);
	}
	else{

		cout<<"\n La lista se encuentra vacia\n\n";
	}


}



