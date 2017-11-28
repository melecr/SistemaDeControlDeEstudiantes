#pragma once
#include "NodoEstudiante.h"
#ifndef LISTAESTUDIANTE_H
#define LISTAESTUDIANTE_H
class ListaEstudiante {
public:
	ListaEstudiante(void);
	NodoEstudiante* getCabeza(void);
	void setCabeza(NodoEstudiante *x);
	void addNodo(int info);
	void mostrarLista(void);
	void insetarOrdenado(int);

protected:
	NodoEstudiante *cabeza;
};
#endif
