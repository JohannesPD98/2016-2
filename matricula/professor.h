#ifndef __PROFESSOR_H__
#define __PROFESSOR_H__
#include <string>
#include <iostream>
using namespace std;

class professor {
private:
	string nome;
	int *disc;
public:
	professor();
	void set_nome(string);
	string get_nome(void);
	void set_disciplinas(int*);
	int* get_disciplinas();
	void imprime();
	listadisciplinas();
	vinculaturma(int);
};
#endif
