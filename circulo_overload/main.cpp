#include "Circulo.h"
#include <iostream>
ostream& operator<<(ostream &Saida, Circulo &c){
	cout << "Centro: (" << c.get_centro_x() << "," << c.get_centro_y() << ")" << endl;
	cout << "Raio: " << c.get_raio() << endl;
	return Saida;
}

istream& operator>>(istream &Entrada, Circulo &c){
	float x,y,raio;
	cout << "Insira coordenada X do centro: " << endl;
	cin >> x;
	c.set_centro_x(x);
	cout << "Insira coordenada Y do centro: " << endl;
	cin >> y;
	c.set_centro_y(y);
	cout << "Insira o raio do circulo: " << endl;
	cin >> raio;
	c.set_raio(raio);
	return Entrada;
}

int main(void){
	Circulo a,b,c,d;
	a = Circulo();
	b = Circulo(2);
	c = Circulo(3,2);
	d = Circulo(3,2,2);
	//cout << a->ToString() << endl;
	cin >> a;
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
