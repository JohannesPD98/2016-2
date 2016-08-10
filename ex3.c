#include <stdio.h>
int main(int arc, char* argv[]) {
	int max, i, j, k;
	printf("Digite um número ímpar: ");
	scanf("%d", &max);
	if(max % 2 == 0) {
		printf("O número deve ser ímpar!!\n");
	} else if (max == 1) {
			printf("1\n");
		} else {
			for (i = 0; i <= (max/2)+1; i++) {
				for( j = i; j <= max - i - 1; j++) {
					printf("%d", j+1);
				}
				printf("\n");
				for (k = 0; k < i+1; k++) {
					printf(" ");
				}
			}
		  }		
	return 0;
}	





