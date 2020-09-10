#include "Player.h"

Player::Player(string name, int hp, int dmg) : name(name), hp(hp), dmg(dmg) {
}

Player::~Player()
{
}

string Player::getName() const{
	return name;
}

int Player::getHp() const {
	return hp;
}

int Player::getDmg() const{
	return dmg;
}

void Player::print() const{
	cout << getName() << ": HP: " << getHp() << ", Dmg: " << getDmg() << endl;
}

void Player::setHp(int h){
	hp = h;
}

Player * Player::getKovetkezo() const{
	return kovetkezo;
}

void Player::setKovetkezo(Player * kovetkezo){
	this->kovetkezo = kovetkezo;
}
/*
void Player::atk(){
	Player* akt = playerList;
	Player* kovetkezo = akt->getKovetkezo();
	int healthA = akt->getHp();
	int healthB = kovetkezo->getHp();

	int i = 0;
	while (akt->getHp() > 0 && kovetkezo->getHp() > 0) {
		if (i % 2 == 0) {
			cout << akt->getName() << " -> " << kovetkezo->getName() << endl;
			cout << akt->getName() << ": Hp: " << akt->getHp() << ", Dmg: " << akt->getDmg() << endl;
			healthB -= akt->getDmg();
			kovetkezo->setHp(healthB);
			cout << kovetkezo->getName() << ": Hp: " << kovetkezo->getHp() << ", Dmg: " << kovetkezo->getDmg() << endl;
		}
		else {
			cout << kovetkezo->getName() << " -> " << akt->getName() << endl;
			healthA -= kovetkezo->getDmg();
			akt->setHp(healthA);
			cout << akt->getName() << ": Hp: " << akt->getHp() << ", Dmg: " << akt->getDmg() << endl;
			cout << kovetkezo->getName() << ": Hp: " << kovetkezo->getHp() << ", Dmg: " << kovetkezo->getDmg() << endl;
		}
		i++;
	}
}
*/
