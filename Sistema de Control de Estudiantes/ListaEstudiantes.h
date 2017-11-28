#pragma once
#include "NodoListaEstudiantes.h"
#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H
class ListaEstudiantes {
public:
	ListaEstudiantes(void);
	NodoListaEstudiantes* getCabeza(void);
	void setCabeza(NodoListaEstudiantes *x);
	void addNodo(int info);
	void mostrarLista(void);
	void insetarOrdenado(int);

protected:
	NodoListaEstudiantes *cabeza;
};
#endif
