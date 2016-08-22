#include <iostream>

using namespace std;

#include "Ponto.h"
#include "linha.h"

int main()
{
    Ponto pontos[2];
    pontos[0].setPonto(1,1);
	pontos[1].setPonto(0,0);
    linha l1(&pontos[0],&pontos[1]);
	l1.print_linha();
	pontos[0].setPonto(8,9);
	pontos[1].setPonto(1,1);
	l1.print_linha();
    return 0;
}
