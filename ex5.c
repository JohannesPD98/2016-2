#include <stdio.h>
int main(int argc, char* argv[]) {
	int l, c, i, j, x, escolha, multiplicar;
	printf("Digite o tamanho da linha da matriz: ");
	scanf("%d", &l);
	printf("Digite o tamanho da coluna da matriz: ");
	scanf("%d", &c);
	int matriz[l-1][c-1];
	for(i = 0; i < l; i++) {
		for(j = 0; j < c; j++) {
			printf("Digite O elemento linha %d, coluna %d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Digite o número a ser multiplicado: ");
	scanf("%d", &x);
	while(1) {
		printf("(1)Multiplicar uma linha\n(2)Multiplicar uma coluna\n>");
		scanf("%d", &escolha);
		if(escolha != 1 && escolha != 2){
			printf("Digite 1 ou 2\n");
			continue;
		}
		break;
	}	
	printf("Digite o número da linha/coluna desejada: ");
	scanf("%d", &multiplicar);
	if(escolha == 1) {
		int multiplo[l];
		for ( i = 0; i < l; i++); {
			multiplo[i] = matriz[i][multiplicar] * x;
		}
		for(i = 0; i < l; i++) {
			printf("%d ", multiplo[i]);
		}
	} else if(escolha == 2) {
			int multiplo[c];
		for ( i = 0; i < c; i++); {
			multiplo[i] = matriz[multiplicar][i] * x;
		}	
		for(i = 0; i < c; i++) {
			printf("%d\n", multiplo[i]);
		}
	  }
	return 0;
}
