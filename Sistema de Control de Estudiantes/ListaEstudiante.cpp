#include "stdafx.h"
#include <iostream>
#include "ListaEstudiante.h"
#include "NodoEstudiante.h"
using namespace std;
ListaEstudiante::ListaEstudiante() {
	this->cabeza = NULL;
}
NodoEstudiante* ListaEstudiante::getCabeza(void) {
	return cabeza;
}
void ListaEstudiante::setCabeza(NodoEstudiante *nodoEstudiantePtr) {
	this->cabeza = nodoEstudiantePtr;
}
void ListaEstudiante::addNodo(int x) {
	NodoEstudiante * aux;
	aux = new NodoEstudiante(x);
	if (getCabeza() == NULL) {
		setCabeza(aux);
	}
	else
	{
		aux->setSig(getCabeza());
		setCabeza(aux);
	}
}
void ListaEstudiante::mostrarLista() {
	NodoEstudiante* aux = getCabeza();
	while (aux != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		aux = aux->getSig();
	}
}

void ListaEstudiante::insetarOrdenado(int x) {
	NodoEstudiante * aux;
	aux = new NodoEstudiante(x);
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
			NodoEstudiante *ant = getCabeza();
			NodoEstudiante *act = getCabeza()->getSig();
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