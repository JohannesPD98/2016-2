#ifndef __LINHA_H__
#define __LINHA_H__
#include <iostream>
#include "Ponto.h"
#include <math.h>
using namespace std;

class linha {
private:
	Ponto *p1, *p2;
	float mod;
public:
	linha();
	linha(Ponto*, Ponto*);
	void set_mod();
	float get_mod();
	void print_linha();
};
#endif
