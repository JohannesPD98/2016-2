#include <iostream>
#include <fstream>
#include "candidato.h"
using namespace std;

int main(void){
	ifstream arq;
	candidato cand[20];
	string nome, partido;
	int num;
	
	arq.open("candidatos.txt", ios::in);
	for (int i = 0; i != 20; i++){
		arq >> num >> nome >> partido;
		cand[i].set_num(num);
		cand[i].set_nome(nome);
		cand[i].set_partido(partido);		
	}		
	arq.close();
	arq.open("urna1.txt", ios::in);
	while(arq.good()){
		arq >> num;
		cand[num-1].mais_um_voto();
	}		
	arq.close();
	arq.open("urna2.txt", ios::in);
	while(arq.good()){
		arq >> num;
		cand[num-1].mais_um_voto();
	}		
	arq.close();
	arq.open("urna3.txt", ios::in);
	while(arq.good()){
		arq >> num;
		cand[num-1].mais_um_voto();
	}		
	arq.close();
	arq.open("urna4.txt", ios::in);
	while(arq.good()){
		arq >> num;
		cand[num-1].mais_um_voto();
	}
	arq.close();
	cout << "Relatório da Votação:" << endl << endl;
	for (int i = 0; i != 20; i++){
		cout << cand[i].get_nome() << " " << cand[i].get_partido() << ": ";
		cout << cand[i].get_votos() << "Votos" << endl; 
	}	
	return 0;
}
