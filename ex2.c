#include <stdio.h>
int main(int argc, char* argv[]) {
	float ma, n1, n2, n3, me;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a média das notas dos exercícios: ");
	scanf("%f", &me);
	ma = (n1 + n2*2 + n3*3 + me)/7;
	printf("Seu conceito é ");
	if(ma < 4) {
		printf("E\n");
	}	else if(ma < 6) {
			printf("D\n");
		}
			else if(ma < 7.5) {
				printf("C\n");
			}	else if(ma < 9) {
					printf("B\n");
				}	else printf("A\n");
	return 0;
}
