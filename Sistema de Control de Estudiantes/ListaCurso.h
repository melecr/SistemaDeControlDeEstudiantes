#pragma once
#include "NodoCurso.h"
#ifndef LISTACURSO_H
#define LISTACURSO_H

class ListaCurso {
public:
	ListaCurso(void);
	NodoCurso* getCabeza(void);
	void setCabeza(NodoCurso *x);
	void addNodo(int info);
	void mostrarLista(void);
	void insetarOrdenado(int);

protected:
	NodoCurso* cabeza;
};
#endif
