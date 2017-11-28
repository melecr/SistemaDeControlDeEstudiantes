#ifndef INFOHORARIO_H
#define INFOHORARIO_H
#include "NodoHorario.h"
#include <string>
using namespace std;

class InfoHorario {
public:

	void setHorario(string x);
	NodoHorario* getHorario(void);

protected:
	string horario;
	NodoHorario* sig;
};
#endif
