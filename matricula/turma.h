#ifndef __TURMA_H__
#define __TURMA_H__
#include <string>
#include <iostream>
using namespace std;

class turma {
private:
	string disciplina;
	int *alunos, *professores;
public:
	turma();
	void set_disciplina(string);
	string get_disciplina();
	void set_alunos(int*);
	int* get_alunos();
	void set_professores(int*);
	int* get_professores();
	void imprime();
	listadisciplinas();
	listaprofessores();
	adicionaturma(int);
};
#endif
