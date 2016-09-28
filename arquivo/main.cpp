#include "inteiro.h"
#include <iostream>
using namespace std;
int main(void){
	inteiro *p, *paux;
	p=NULL;

	for(int i=0; i<10; i++){
		if(p==NULL)
			paux=p=new inteiro();
		else{
			paux=p;
			while(paux->prox!=NULL)
				paux=paux->prox;
			paux->prox=new inteiro();
			paux=paux->prox;
		}
		paux->valor=i+1;
	}

	paux=p;
	while(paux!=NULL){
		cout << "Paux->valor == " << paux->valor << endl;
		paux=paux->prox;
		delete p;
		p=paux;
	}

	return 0;
}
