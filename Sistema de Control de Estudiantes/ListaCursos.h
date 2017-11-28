#pragma once
#include "NodoListaCursos.h"
#ifndef LISTACURSOS_H
#define LISTACURSOS_H
class ListaCursos {
public:
	ListaCursos(void);
	NodoListaCursos* getCabeza(void);
	void setCabeza(NodoListaCursos *x);
	void addNodo(int info);
	void mostrarLista(void);
	void insetarOrdenado(int);

protected:
	NodoListaCursos *cabeza;
};
#endif
