#include "inteiro.h"
#include <iostream>
using namespace std;

int main(){
	inteiro *p, *paux, *inserido;
	int input=1;
	p=paux=NULL;
	while(input!=0){
		cout << "Digite um número(0 para sair): ";
		cin >> input;
		cout << endl;
		if(p==NULL){
			p = new inteiro();
			p->valor=input;
			p->prox=NULL;
		}else{
			if(input < p->valor){
				paux = new inteiro();
				paux->valor = input;
				paux->prox = p;
				p = paux;
			}else{
				paux=p;
				while(paux->valor < input){
					if(paux->prox->valor >input){
						inserido = new inteiro();
						inserido->valor = input;
						inserido->prox = paux->prox;
						paux->prox=inserido;
					}else paux = paux->prox;					
	}
	paux=p;
	cout << "Lista:" << endl;
	while(paux != NULL){
		cout << paux->valor << endl;
		paux = paux->prox;
	}
	return 0;
}
