#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
using namespace std;

class Player {
public:
	Player(string name, int hp, int dmg);
	string getName()const;
	int getHp() const;
	int getDmg() const;
	void print() const;
	//void setHp(int h);
	void damage(int dmg) {
		if (hp > dmg) {
			hp -= dmg;
		}
	}

private:
	const string name;
	const int dmg;
	int hp;

};
#endif // !ATTACK_H
