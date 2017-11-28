#ifndef INFOLISTACURSOS_H
#define INFOLISTACURSOS_H
#include "NodoListaCursos.h"
#include <string>
using namespace std;

class InfoListaCursos {
public:

	void setCursos(string codigoCurso, string nombreCurso);
	NodoListaCursos* getCursos(void);

protected:
	string codigoCurso;
	string nombreCurso;
	NodoListaCursos* sig;
};
#endif
