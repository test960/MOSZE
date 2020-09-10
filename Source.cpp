#include <iostream>
#include <string>
#include "Player.h"
#include "Attack.h"
using namespace std; 

int main() {
	Player* a = new Player("Maple", 150, 10);
	Player* b = new Player("Sally", 45, 30);
	Attack result;

	a->print();
	b->print();
	/*
	int bHealth = b->getHp();
	int aHealth = a->getHp();
	int i = 0;
	while (a->getHp() > 0 && b->getHp() > 0){
		if (i % 2 == 0) {
			cout << a->getName() << " -> " << b->getName() << endl;
			a->print();
			bHealth -= a->getDmg();
			if (bHealth < 0)
				bHealth = 0;
			b->setHp(bHealth);
			b->print();
		}
		else {
			cout << b->getName() << " -> " << a->getName() << endl;
			aHealth -= b->getDmg();
			if (aHealth < 0)
				aHealth = 0;
			a->setHp(aHealth);
			a->print();
			b->print();
		}
		i++;
	}*/
	result.atk(*a,*b);
	//won
	
	return 0;
}