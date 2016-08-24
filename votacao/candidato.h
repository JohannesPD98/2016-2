#ifndef __CANDIDATO_H__
#define __CANDIDATO_H__
#include <string>
using namespace std;

class candidato{
private:
	string nome, partido;
	int votos, num;
public:
	candidato();
	void set_nome(string);
	string get_nome();
	void set_num(int);
	void set_partido(string);
	string get_partido();
	void mais_um_voto();
	int get_votos();
};
#endif
