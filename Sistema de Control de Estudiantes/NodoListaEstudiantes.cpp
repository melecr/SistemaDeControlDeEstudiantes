#include "stdafx.h"
#include "NodoListaEstudiantes.h"
using namespace std;

NodoListaEstudiantes::NodoListaEstudiantes(void) {
	this->info = 0;
	this->sig = NULL;
}

NodoListaEstudiantes::NodoListaEstudiantes(int x) {
	this->info = x;
	this->sig = NULL;
}

void NodoListaEstudiantes::setInfo(int x) {
	this->info = x;
}

int NodoListaEstudiantes::getInfo(void) {
	return info;
}

void NodoListaEstudiantes::setSig(NodoListaEstudiantes *x) {
	this->sig = x;
}

NodoListaEstudiantes* NodoListaEstudiantes::getSig(void) {
	return sig;
}

NodoListaEstudiantes::~NodoListaEstudiantes() {
	this->info = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}