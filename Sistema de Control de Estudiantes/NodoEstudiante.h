#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H

class NodoEstudiante {
public:
	NodoEstudiante(void);
	NodoEstudiante(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoEstudiante * x);
	NodoEstudiante* getSig(void);
	~NodoEstudiante(void);
protected:
	int info;
	NodoEstudiante * sig;
};
#endif
