#ifndef __CIRCULO_H__
#define __CIRCULO_H__
#include <iostream>
#include <string>
using namespace std;

class Circulo{
private:
	float centro_x,centro_y, raio;	
public:
	Circulo();
	Circulo(float);
	Circulo(float, float);
	Circulo(float, float, float);
	void set_raio(float);
	void inc_raio(float);
	void set_centro(float, float);
	void print_raio();
	void print_centro();
	void print_area();
	string ToString();
};
#endif
