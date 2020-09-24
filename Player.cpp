#include "Player.h"

Player::Player(string name, int hp, int dmg) : name(name), hp(hp), dmg(dmg) {
}

string Player::getName() const {
	return name;
}

int Player::getHp() const {
	return hp;
}

int Player::getDmg() const {
	return dmg;
}

void Player::print() const {
	cout << getName() << ": HP: " << getHp() << ", Dmg: " << getDmg() << endl;
}
//
//void Player::setHp(int h) {
//	hp = h;
//}
