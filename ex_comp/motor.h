#ifndef __MOTOR_H__
#define __MOTOR_H__
#include <string>
using namespace std;
class motor {
private:
	float comb;
	float hp;
public:
	motor(float pcomb = 0, float _hp = 0);
	float get_comb(void);
	void set_comb(float _comb);
	float get_hp(void);
	void set_hp(float _hp);
};
#endif

