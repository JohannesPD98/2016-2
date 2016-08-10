#ifndef __PESSOA_H__
#define __PESSOA_H__
#include <stdio.h>
#include <string.h>

class Pessoa{
private:
	char nome[50];
	int idade;
	float altura;
public:
	Pessoa(void);
	void setnome(char* valor);
	char* getnome(void);
	void setidade(int valor);
	int getidade(void);
	void setaltura(float valor);
	float getaltura(void);
	void imprime(void);
};
#endif
