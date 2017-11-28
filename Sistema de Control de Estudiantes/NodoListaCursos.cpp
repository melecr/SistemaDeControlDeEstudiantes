#include "stdafx.h"
#include "NodoListaCursos.h"
using namespace std;

NodoListaCursos::NodoListaCursos(void) {
	this->info = 0;
	this->sig = NULL;
}

NodoListaCursos::NodoListaCursos(int x) {
	this->info = x;
	this->sig = NULL;
}

void NodoListaCursos::setInfo(int x) {
	this->info = x;
}

int NodoListaCursos::getInfo(void) {
	return info;
}

void NodoListaCursos::setSig(NodoListaCursos *x) {
	this->sig = x;
}

NodoListaCursos* NodoListaCursos::getSig(void) {
	return sig;
}

NodoListaCursos::~NodoListaCursos() {
	this->info = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}