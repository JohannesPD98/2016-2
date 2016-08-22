#include "linha.h"

linha::linha(){}
linha::linha(Ponto *_p1,Ponto *_p2){
	p1 = _p1;
	p2 = _p2;
}

void linha::set_mod(){
	int x1,y1,x2,y2;
	p1->getPonto(x1,y1);
	p2->getPonto(x2,y2);
	mod = powf(powf(x1-x2,2) + powf(y1-y2,2), 0.5);
}
	
float linha::get_mod(){
	set_mod();
	return mod;
}
void linha::print_linha(){
	set_mod();
	int x1,x2,y1,y2;
	p1->getPonto(x1,y1);
	p2->getPonto(x2,y2);
	cout << "Linha:" << endl << "Comprimento: " << mod << endl;
	cout << "Ponto Inicial: " << "(" << x1 << "," << y1 << ")" << endl;
	cout << "Ponto Final: " << "(" << x2 << "," << y2 << ")" << endl;
}
