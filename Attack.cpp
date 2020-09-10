#include "Attack.h"

Attack::Attack(){
}

Attack::~Attack(){
}
void Attack::atck(Player akt, Player kovetkezo) {
	/*Player* akt = playerList;
	Player* kovetkezo = akt.getKovetkezo();*/
	int healthA = akt.getHp();
	int healthB = kovetkezo.getHp();

	int i = 0;
	while (akt.getHp() > 0 && kovetkezo.getHp() > 0) {
		if (i % 2 == 0) {
			cout << akt.getName() << " . " << kovetkezo.getName() << endl;
			cout << akt.getName() << ": Hp: " << akt.getHp() << ", Dmg: " << akt.getDmg() << endl;
			healthB -= akt.getDmg();
			if (healthB < 0)
				healthB = 0;
			kovetkezo.setHp(healthB);
			cout << kovetkezo.getName() << ": Hp: " << kovetkezo.getHp() << ", Dmg: " << kovetkezo.getDmg() << endl;
		}
		else {
			cout << kovetkezo.getName() << " . " << akt.getName() << endl;
			healthA -= kovetkezo.getDmg();
			if (healthA < 0)
				healthA = 0;
			akt.setHp(healthA);
			cout << akt.getName() << ": Hp: " << akt.getHp() << ", Dmg: " << akt.getDmg() << endl;
			cout << kovetkezo.getName() << ": Hp: " << kovetkezo.getHp() << ", Dmg: " << kovetkezo.getDmg() << endl;
		}
		i++;
	}

}

void Attack::won(Player a, Player b){
	if (a.getHp() > 0)
		cout << a.getName() << " wins, " << b.getName() << " loses" << endl;
	else
		cout << b.getName() << " wins, " << a.getName() << " loses" << endl;
}
