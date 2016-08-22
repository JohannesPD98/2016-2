#ifndef __ALUNO_H__
#define __ALUNO_H__
#include <string>
#include <iostream>
using namespace std;

class aluno {
private:
	string nome;
	int *matr;
public:
	aluno();
	void set_nome(string);
	void imprime();
	listadisciplinas();
	listaprofessores();
	adicionaturma(int);
};
#endif
