#ifndef NODOLISTACURSOS_H
#define NODOLISTACURSOS_H
class NodoListaCursos {
public:
	NodoListaCursos(void);
	NodoListaCursos(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoListaCursos * x);
	NodoListaCursos* getSig(void);
	~NodoListaCursos(void);
protected:
	int info;
	NodoListaCursos * sig;
};
#endif
