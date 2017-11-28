#include "stdafx.h"
#include <iostream>
#include "ListaCursos.h"
#include "NodoListaCursos.h"
using namespace std;
ListaCursos::ListaCursos() {
	this->cabeza = NULL;
}
NodoListaCursos* ListaCursos::getCabeza(void) {
	return cabeza;
}
void ListaCursos::setCabeza(NodoListaCursos *nodoListaCursosPtr) {
	this->cabeza = nodoListaCursosPtr;
}
void ListaCursos::addNodo(int x) {
	NodoListaCursos * aux;
	aux = new NodoListaCursos(x);
	if (getCabeza() == NULL) {
		setCabeza(aux);
	}
	else
	{
		aux->setSig(getCabeza());
		setCabeza(aux);
	}
}
void ListaCursos::mostrarLista() {
	NodoListaCursos* aux = getCabeza();
	while (aux != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		aux = aux->getSig();
	}
}

void ListaCursos::insetarOrdenado(int x) {
	NodoListaCursos * aux;
	aux = new NodoListaCursos(x);
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
			NodoListaCursos *ant = getCabeza();
			NodoListaCursos *act = getCabeza()->getSig();
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