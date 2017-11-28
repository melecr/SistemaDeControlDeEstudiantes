#ifndef NODOAULA_H
#define NODOAULA_H
class NodoAula {
public:
	NodoAula(void);
	NodoAula(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoAula * x);
	NodoAula* getSig(void);
	~NodoAula(void);
protected:
	int info;
	NodoAula * sig;
};
#endif
