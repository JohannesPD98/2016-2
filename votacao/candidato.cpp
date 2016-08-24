#include "candidato.h"
candidato::candidato(){
	nome = partido = "Indefinido";
	votos = 0;
}	
void candidato::set_nome(string _nome){
	nome = _nome;
}
	
string candidato::get_nome(){
	return nome;
}

void candidato::set_num(int _num){
	num = _num;
}

void candidato::set_partido(string _partido){
	partido = _partido;
}

string candidato::get_partido(){
	return partido;
}
void candidato::mais_um_voto(void){
	votos++;
}

int candidato::get_votos(){
	return votos;
}

