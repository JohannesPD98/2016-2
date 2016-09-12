#ifndef __CIRCULO_H__
#define __CIRCULO_H__
#include <iostream>
#include <string>
#include <sstream>
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
	void set_centro_x(float);
	void set_centro_y(float);
	float get_raio();
	float get_centro_x();
	float get_centro_y();
	float get_area();
	string ToString();
};
#endif
