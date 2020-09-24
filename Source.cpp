#include <iostream>
#include <string>
#include "Player.h"
#include "Attack.h"
using namespace std;

int main() {
	Attack result;
	string name;
	int hp, dmg;

	//ElsĹ‘ jĂˇtĂ©kos feltĂ¶ltĂ©se
	cout << "Name: ";
	cin >> name;
	cout << "Hp: ";
	cin >> hp;
	cout << "Dmg: ";
	cin >> dmg;
	Player* a = new Player(name, hp, dmg);

	//MĂˇsodik jĂˇtĂ©kos feltĂ¶ltĂ©se
	cout << "Name: ";
	cin >> name;
	cout << "Hp: ";
	cin >> hp;
	cout << "Dmg: ";
	cin >> dmg;
	Player* b = new Player(name, hp, dmg);


	a->print();
	b->print();

	result.atck(*a, *b);
	delete a;
	delete b;
	return 0;
}
