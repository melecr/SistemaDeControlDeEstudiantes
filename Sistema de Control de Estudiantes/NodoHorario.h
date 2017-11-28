#ifndef NODOHORARIO_H
#define NODOHORARIO_H

class NodoHorario {
public:
	NodoHorario(void);
	NodoHorario(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoHorario * x);
	NodoHorario* getSig(void);
	~NodoHorario(void);
protected:
	int info;
	NodoHorario * sig;
};
#endif
