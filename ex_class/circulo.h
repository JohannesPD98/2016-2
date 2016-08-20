#ifndef __CIRCULO_H__
#define __CIRCULO_H__
#include <iostream>
#include <math.h>
using namespace std;

class circulo {
private:
	float x,y, raio;
	float area();
	float distcentros(float, float);
	float perimetro();
public:
	circulo();
	void set_raio(float);
	void inc_raio(float);
	void set_centro(float,float);
	void print_raio();
	void print_centro();
	void print_area();
#endif
