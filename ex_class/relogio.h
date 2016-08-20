#ifndef __RELOGIO_H__
#define __RELOGIO_H__
#include <iostream>
using namespace std;

class relogio {
private:
	int h, m, s;
public:
	relogio(void);
	void set_hora(int, int, int);
	void get_hora(int*,int*,int*);
	void tempo(void);
};
#endif
