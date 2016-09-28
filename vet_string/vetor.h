#ifndef __VETOR_H__
#define __VETOR_H__
#include <string>
#include <iostream>
using namespace std;
class Vetor{
private:
	string vec[5];
public:
	Vetor();
	Vetor(int _tam);
	int insere(string s);
	int remove(string s);
};

#endif

