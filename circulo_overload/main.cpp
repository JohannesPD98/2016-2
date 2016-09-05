#include "Circulo.h"


int main(void){
	Circulo *a,b,c,d;
	a = new Circulo();
	b = Circulo(2);
	c = Circulo(3,2);
	d = Circulo(3,2,2);
	//cout << a->ToString() << endl;
	cout << a;
	/*a->print_raio();
	a->print_centro();
	a->print_area();
	b.print_raio();
	cout << a;
	b.print_centro();
	b.print_area();
	c.print_raio();
	c.print_centro();
	c.print_area();
	d.print_raio();
	d.print_centro();
	d.print_area();*/
}
