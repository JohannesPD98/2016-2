#include "circulo.h"

circulo::area(){
	return 3,14*raio*raio;
}

circulo::distcentros(float _x, float _y){
	return powf(powf(x - _x, 2) + powf(y - _y, 2)), 0.5);
}
	
circulo::perimetro(){
	return 2*3,14*raio;
}

void circulo::set_raio(float _raio){
	raio = _raio;
}

void circulo::inc_raio(float perc){
	raio = raio + raio * (perc/100);
}

void circulo::set_centro(float,float){
	
float circulo::print_raio();
float circulo::print_centro();
float circulo::print_area();
