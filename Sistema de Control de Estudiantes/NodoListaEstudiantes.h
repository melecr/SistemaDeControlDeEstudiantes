#ifndef NODOLISTAESTUDIANTES_H
#define NODOLISTAESTUDIANTES_H
class NodoListaEstudiantes {
public:
	NodoListaEstudiantes(void);
	NodoListaEstudiantes(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoListaEstudiantes * x);
	NodoListaEstudiantes* getSig(void);
	~NodoListaEstudiantes(void);
protected:
	int info;
	NodoListaEstudiantes * sig;
};
#endif
