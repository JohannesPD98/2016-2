#ifndef __ELEVADOR_H__
#define __ELEVADOR_H__
#include <iostream>
using namespace std;

class elevador {
private:
	int andar, andares, cap, pop;
public:
	elevador(void);
	~elevador();
	void inicializa(int, int);
	void entra();
	void sai();
	void sobe();
	void desce();
	int get_andar();
	int get_andares();
	int get_cap();
	int get_pop();
};
#endif
