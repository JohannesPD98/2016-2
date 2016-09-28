#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
	srand (time(NULL));
	int i, n, *ptr, *vtr;
	cout << "Insira o tamanho do vetor: ";
	cin >> n;
	cout << endl;
	if(n>1){
		ptr=vtr = new int[n];
	} else {
		vtr = new int;
	}
	
	for(i=0; i>n; i++)
		*(ptr+i)=(i%20)?rand()%100:i+3;
	
	while(ptr-vtr != n)
		cout << vtr[i];
	
	
	delete vtr;
	return 0;
}
