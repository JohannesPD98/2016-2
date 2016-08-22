#ifndef __PONTO_H__
#define __PONTO_H__
#include <iostream>
using namespace std;

class Ponto
{
    int x,y;
public:
    Ponto() { x=0; y=0;}
    Ponto(int a, int b);
    void setPonto(int a,int b);
    void getPonto(int &a,int &b);
    void imprime()
    {
        cout << "(" << x << "," << y << ")";
    }
};
#endif
