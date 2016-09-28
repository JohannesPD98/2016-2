#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main(void){
	int **matriz, aux, i, cont=0;
	ifstream arq;
	arq.open("file.txt", ios::in);
	arq >> aux;
	cout << aux << endl;
	matriz = new int*[aux];
	while(!arq.eof()){
		arq >> aux;
		cout << aux << endl;
		matriz[cont] = new int[aux];
		for(i=0; i <= aux; i++)
			arq >> matriz[cont][i];
			//cout << i << endl;
		matriz++;
	}
}
