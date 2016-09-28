#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
	int colunas, linhas, **matriz, cont=0, i, j;
	cout << "Insira o número de Linhas: ";
	cin >> linhas;
	cout << endl;
	matriz = new int*[linhas];
	for(j=0; j < linhas; j++){
		cout << "Insira o número de Colunas: ";
		cin >> colunas;
		cout << endl;
		matriz[cont] = new int[colunas];
		for(i=0; i < colunas; i++){
			cout << "Insira o valor " << i << " : ";
			cin >> matriz[cont][i];
			cout << endl;
		}
	}
	return 0;
}
