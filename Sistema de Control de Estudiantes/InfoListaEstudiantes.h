#ifndef INFOLISTAESTUDIANTES_H
#define INFOLISTAESTUDIANTES_H
#include "NodoListaEstudiantes.h"
#include <string>
using namespace std;

class InfoListaCursos {
public:

	void setInfoListaEstudiante(string nombreCompleto, string cedulaIdentidad, string codigoEstudiante);
	NodoListaEstudiantes* getListaEstudiantes(void);

protected:
	string nombreCompleto;
	string cedulaIdentidad;
	string codigoEstudiante;
	NodoListaEstudiantes* sig;
};
#endif
