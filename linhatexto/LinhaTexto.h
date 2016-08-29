#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

class LinhaTexto{
private:
	string Texto;
public:
	LinhaTexto();
	void setTexto(string);
	void separaPalavras();
};
