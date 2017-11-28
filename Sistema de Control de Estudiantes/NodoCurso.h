#ifndef NODOCURSO_H
#define NODOCURSO_H
class NodoCurso {
public:
	NodoCurso(void);
	NodoCurso(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoCurso * x);
	NodoCurso* getSig(void);
	~NodoCurso(void);
protected:
	int info;
	NodoCurso * sig;
};
#endif
