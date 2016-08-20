#include "motor.h"

motor::motor(float _comb, float _hp){
	comb = _comb;
	hp = _hp;
}

float motor::get_comb(void){
	return comb;
}

void motor::set_comb(float _comb){
	comb = _comb;
}

float motor::get_hp(void){
	return hp;
}

void motor::set_hp(float _hp){
	hp = _hp;
}
s
