#include "elevador.h"

elevador::elevador(void){
	cout << "Elevador sendo instanciado" << endl;
	andar = andares = cap = pop = 0;
}

elevador::~elevador(){
	cout << "Objeto sendo desalocado" << endl;
}

void elevador::inicializa(int _cap, int _andares){
	cout << "Inicializando capacidade e nro de andares do prédio" << endl;
	cap = _cap;
	andares = _andares;
}
void elevador::entra(){
	if(pop < cap) {
		cout << "Entrou um vivente!!" << endl;
		pop++;
	}
	else {
		cout << "Elevador lotado!!!" << endl;
	}
}

void elevador::sai(){
	if(pop > 0){
		cout << "Saiu um vivente!!" << endl;
		pop--;
	}
	else{
		cout << "Ninguém saiu, elevador vazio!!" << endl;
	}
}

void elevador::sobe(){
	if(andar < andares) {
		cout << "Subindo!" << endl;
		andar++;
	}
	else {
		cout << "Elevador no topo do prédio" << endl;
	}
}

void elevador::desce(){
	if(andar > 0){
		cout << "Descendo!" << endl;
		andar--;
	}
	else {
		cout << "Elevador no térreo" << endl;
	}
}
int elevador::get_andar(){
	return andar;
}

int elevador::get_andares(){
	return andares;
}

int elevador::get_cap(){
	return cap;
}

int elevador::get_pop(){
	return pop;
}
