#include "stdafx.h"
#include "NodoCurso.h"
using namespace std;

NodoCurso::NodoCurso(void) {
	this->info = 0;
	this->sig = NULL;
}

NodoCurso::NodoCurso(int x) {
	this->info = x;
	this->sig = NULL;
}

void NodoCurso::setInfo(int x) {
	this->info = x;
}

int NodoCurso::getInfo(void) {
	return info;
}

void NodoCurso::setSig(NodoCurso *x) {
	this->sig = x;
}

NodoCurso* NodoCurso::getSig(void) {
	return sig;
}

NodoCurso::~NodoCurso() {
	this->info = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}