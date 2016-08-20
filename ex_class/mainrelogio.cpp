#include "relogio.h"

int main(void){
	int hora = 23, minuto = 59, segundo = 59, a, b, c;
	relogio r1;
	r1.set_hora(hora, minuto, segundo);
	r1.get_hora(&a, &b, &c);
	cout << a << b << c << endl;
	r1.tempo();
	return 0;
}
