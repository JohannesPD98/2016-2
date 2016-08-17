#ifndef __AUTOMOVEL_H__
#define __AUTOMOVEL_H__
#include "pneu.h"
#include "motor.h"
#include <stdlib.h>

class automovel {
private:
	string marca;
	int km;

	pneu *p[4];
	motor *m;
public:
	automovel(string _marca = "generico", int _km = 0, pneu _p[4], motor _m);
	string get_marca(void);
	void set_marca(string _marca);
	int get_km(void);
	void set_km(_km);
	pneu get_pneu(int ipneu);
	void set_pneu(int ipneu, pneu _p);
	motor get_motor();
	void set_motor(motor _m);
};
#endif
