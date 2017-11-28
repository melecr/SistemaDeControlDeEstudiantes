#include "stdafx.h"
#include "NodoEstudiante.h"
using namespace std;

NodoEstudiante::NodoEstudiante(void) {
	this->info = 0;
	this->sig = NULL;
}

NodoEstudiante::NodoEstudiante(int x) {
	this->info = x;
	this->sig = NULL;
}

void NodoEstudiante::setInfo(int x) {
	this->info = x;
}

int NodoEstudiante::getInfo(void) {
	return info;
}

void NodoEstudiante::setSig(NodoEstudiante *x) {
	this->sig = x;
}

NodoEstudiante* NodoEstudiante::getSig(void) {
	return sig;
}

NodoEstudiante::~NodoEstudiante() {
	this->info = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}