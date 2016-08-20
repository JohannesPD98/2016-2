#include "pessoa.h"

int main(void) {
	char name[] = "Johannes";
	Pessoa eu;
	eu.setnome(name);
	eu.setidade(18);
	eu.setaltura(1.74);
	printf("%s\n%d\n%.2f\n", eu.getnome(), eu.getidade(), eu.getaltura());
	eu.imprime();
	return 0;
}
