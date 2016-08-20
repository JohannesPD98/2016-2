#include "pneu.h"

pneu::pneu(string _marca, float _press){
	marca = _marca;
	press = _press;
}

string pneu::get_marca(){
	return marca;
}

void pneu::set_marca(string _marca){
	marca = _marca;
}

float pneu::get_press(){
	return press;
}

void pneu::set_press(float _press){
	press = _press;
}

