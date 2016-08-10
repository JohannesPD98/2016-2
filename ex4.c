#include <stdio.h>
int main(int argc, char* argv[]) {
	char p1[50], p2[50];
	int i;
	printf("Digite um nome:\n");
	scanf("%s", p1);
	printf("Digite outro nome:\n");
	scanf("%s", p2);
	printf("\nNomes em Ordem:\n");
	for(i = 0; i <= 50; i++) {
		if (p1[i] < p2[i]) {
			printf("%s\n%s\n", p1, p2);
			break;
		} else if(p1[i] > p2[i]) {
				printf("%s\n%s\n", p2, p1);
				break;
		  }
	}
	return 0;
}
