#include "stdafx.h"
#include <iostream>
#include "ListaCurso.h"
#include "NodoCurso.h"
using namespace std;
ListaCurso::ListaCurso() {
	this->cabeza = NULL;
}
NodoCurso* ListaCurso::getCabeza(void) {
	return cabeza;
}
void ListaCurso::setCabeza(NodoCurso *nodoCursoPtr) {
	this->cabeza = nodoCursoPtr;
}
void ListaCurso::addNodo(int x) {
	NodoCurso * aux;
	aux = new NodoCurso(x);
	if (getCabeza() == NULL) {
		setCabeza(aux);
	}
	else
	{
		aux->setSig(getCabeza());
		setCabeza(aux);
	}
}
void ListaCurso::mostrarLista() {
	NodoCurso* aux = getCabeza();
	while (aux != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		aux = aux->getSig();
	}
}

void ListaCurso::insetarOrdenado(int x) {
	NodoCurso * aux;
	aux = new NodoCurso(x);
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
			NodoCurso *ant = getCabeza();
			NodoCurso *act = getCabeza()->getSig();
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