#ifndef __PNEU_H__
#define __PNEU_H__
#include <string>
using namespace std;

class pneu {
private:
	string marca;
	float press;
public:
	pneu(string pmarca = "desconhecida", float ppress = -1);
	string get_marca();
	void set_marca(string pmarca);
	float get_press();
	void set_press(float ppress);
};
#endif

