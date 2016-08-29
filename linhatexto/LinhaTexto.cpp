#include "LinhaTexto.h"

LinhaTexto::LinhaTexto(){}

void LinhaTexto::setTexto(string _Texto){
	Texto = _Texto;
}
void LinhaTexto::separaPalavras(){
	string const c(Texto);
	for (unsigned i=0; i!=Texto.length(); i++){
		if (c[i] == ' '){
			cout << endl;
		} else cout << c[i];
	}
	cout << endl;
}
