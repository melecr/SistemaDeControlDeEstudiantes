#include "stdafx.h"
#include <iostream>
#include "ListaEstudiantes.h"
#include "NodoListaEstudiantes.h"
using namespace std;
ListaEstudiantes::ListaEstudiantes() {
	this->cabeza = NULL;
}
NodoListaEstudiantes* ListaEstudiantes::getCabeza(void) {
	return cabeza;
}
void ListaEstudiantes::setCabeza(NodoListaEstudiantes *nodoListaEstudiantesPtr) {
	this->cabeza = nodoListaEstudiantesPtr;
}
void ListaEstudiantes::addNodo(int x) {
	NodoListaEstudiantes * aux;
	aux = new NodoListaEstudiantes(x);
	if (getCabeza() == NULL) {
		setCabeza(aux);
	}
	else
	{
		aux->setSig(getCabeza());
		setCabeza(aux);
	}
}
void ListaEstudiantes::mostrarLista() {
	NodoListaEstudiantes* aux = getCabeza();
	while (aux != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		aux = aux->getSig();
	}
}

void ListaEstudiantes::insetarOrdenado(int x) {
	NodoListaEstudiantes * aux;
	aux = new NodoListaEstudiantes(x);
	if (getCabeza() == NULL)
	{
		setCabeza(aux);
	}
	else
	{
		if (getCabeza()->getInfo() > aux->getInfo())
		{
			aux->setSig(getCabeza());
			setCabeza(aux);
		}
		else
		{
			NodoListaEstudiantes *ant = getCabeza();
			NodoListaEstudiantes *act = getCabeza()->getSig();
			while (act != NULL && !(act->getInfo() > aux->getInfo()))
			{
				ant = ant->getSig();
				act = act->getSig();
			}
			aux->setSig(act);
			ant->setSig(aux);
		}
	}

}