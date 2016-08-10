#include <stdio.h>

int main(int argc, char* argv[]) {
	int size, i, j, menor = 0, linhamenor;
	printf("Digite o tamanho da matriz: ");
	scanf("%d", &size);
	int matriz[size-1][size-1];
	for	(i = 0; i <= size-1; i++) {
		for (j = 0; j <= size-1; j++) {
			printf("Digite o elemento da linha %d, coluna %d: ", i, j);
			scanf("%d", &matriz[i][j]);
			if (i == 0 && j == 0) {
				menor = matriz[i][j];
				linhamenor = 0;
			}
			if(matriz[i][j] < menor && linhamenor != i) {
				linhamenor = i;
			}
		}
	}
	printf("A linha que contém o menor número é a linha %d\n", linhamenor);
	return 0;
}

