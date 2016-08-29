#include <iostream>
#include <fstream>
#include "candidato.h"
using namespace std;

int main(void){
	ifstream arq;
	candidato cand[20];
	string nome, partido;
	int num, maisvotado=0, menosvotado=0;
	float totvotos=0;
	
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
		if (cand[i].get_votos() > cand[maisvotado].get_votos()){
			maisvotado = i;
		}
		if (cand[i].get_votos() < cand[menosvotado].get_votos()){
			menosvotado = i;
		}
		totvotos += cand[i].get_votos();
		cout << cand[i].get_nome() << " - " <<  cand[i].get_partido() << ": ";
		cout << cand[i].get_votos() << " " << "Votos" << endl; 
	}
	cout << "Total de Votos: " << totvotos << endl;
	cout << "Candidato mais votado: " << cand[maisvotado].get_nome();
	cout << " " << cand[maisvotado].get_partido() << endl;
	cout << "Candidato menos votado: " << cand[menosvotado].get_nome();
	cout << " " << cand[menosvotado].get_partido() << endl;
	cout << "Percentual de votos" << (cand[maisvotado].get_votos()*100/(totvotos));
	return 0;
}
