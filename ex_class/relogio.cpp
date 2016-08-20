#include "relogio.h"

relogio::relogio(void){
	cout << "Relógio em zero" << endl;
	h = m = s = 0;
}
void relogio::set_hora(int _h, int _m, int _s){
	h = _h;
	m = _m;
	s = _s;
	cout << "O horário agora é " << h << ":" << m << ":" << s << endl;
}
void relogio::get_hora(int* _h, int* _m, int* _s){
	*_h = h;
	*_m = m;
	*_s = s;
}
void relogio::tempo(){
	s++;
	if (s > 59) {
		s -= 60;
		m++;
	}
	if (m > 59) {
		s -= 60;
		h++;
	}
	if(h > 23) {
		h -= 24;
		cout << "É um novo dia!!" << endl;
	}
	set_hora(h, m, s);
}
