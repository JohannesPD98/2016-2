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
void Circulo::set_centro_x(float x){
	centro_x=x;
}
void Circulo::set_centro_y(float y){
	centro_y=y;
}
float Circulo::get_raio(){
	return raio;
}
float Circulo::get_centro_x(){
	return centro_x;
}
float Circulo::get_centro_y(){
	return centro_y;
}
float Circulo::get_area(){
	return 3.14*raio*raio;
}
string Circulo::ToString(){
	string s;
	ostringstream convert;
	convert << "Centro: (" << centro_x << "," << centro_y << ") " << "Raio: " << raio;
	s = convert.str();
	return s;
}
























