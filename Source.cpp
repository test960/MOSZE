#include <iostream>
#include <string>
#include "Player.h"
#include "Attack.h"
using namespace std; 

int main() {
	Player* a = new Player("Maple", 150, 10);
	Player* b = new Player("Sally", 45, 130);
	Attack result;

	a->print();
	b->print();
	
	result.atck(*a, *b);	
	return 0;
}
