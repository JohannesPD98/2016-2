#include "Circulo.h"
#include <string>
Circulo::Circulo(){
	centro_x=centro_y=0;
	raio=1;
}
Circulo::Circulo(float _raio){
	centro_x=centro_y=0;
	raio=_raio;
}
Circulo::Circulo(float x, float y){
	centro_x=x;
	centro_y=y;
	raio=1;
}
Circulo::Circulo(float x, float y, float _raio){
	centro_x=x;
	centro_y=y;
	raio=_raio;
}
void Circulo::set_raio(float _raio){
	raio=_raio;
}
void Circulo::inc_raio(float perc){
	raio+=raio*(perc/100);
}
void Circulo::set_centro(float x, float y){
	centro_x=x;
	centro_y=y;
}
void Circulo::print_raio(){
	cout << "Raio: " << raio << endl;
}
void Circulo::print_centro(){
	cout << "Centro: (" << centro_x << "," << centro_y << ")" << endl;
}
void Circulo::print_area(){
	cout << "Àrea: " << 3.14*raio*raio << endl;
}
string Circulo::ToString(){
	string s = to_string(centro_x);
	return s;
}
