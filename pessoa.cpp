#include "pessoa.h"

Pessoa::Pessoa(void) {
	nome[0] = idade = altura = -1;
}
void Pessoa::setnome(char* valor) {
	strcpy(nome, valor);
}
char* Pessoa::getnome(void) {
	return nome;
}
void Pessoa::setidade(int valor) {
	idade = valor;
}
int Pessoa::getidade(void) {
	return idade;
}
void Pessoa::setaltura(float valor) {
	altura = valor;
}
float Pessoa::getaltura(void) {
	return altura;
}
void Pessoa::imprime(void) {
	printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
}

