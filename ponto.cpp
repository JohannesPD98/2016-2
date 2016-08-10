#include "ponto.h"

Ponto::Ponto(void) {
	x = y = 0;
}
void Ponto::setX(int valor) {
	x = valor;
}
void Ponto::setY(int valor) {
	y = valor;
}
void Ponto::imprime(void) {
	printf("Dados do ponto: (x=%d, y=%d)\n", x, y);
} 
