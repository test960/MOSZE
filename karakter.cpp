#include "Player.h"

std::string Player::getName() const
{
	return name;
}

int Player::getHp() const
{
	return hp;
}

int Player::getDmg() const
{
	return dmg;
}

void Player::takeDamage(const Unit& enemy)
{
	int damage = enemy.getDmg();
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}
std::string extractName(const std::string line)
{
	std::string name = line.substr(line.find(":"));
	name.erase(name.find_last_of('"'),name.length()-1);
	return name.substr(name.find_first_of('"')+1);
}

Player* Player::parseUnit(const std::string& filename){
	std::ifstream file(filename);
	if(file.good()){
		std::string line;
		std::getline(file, line);
		std::getline(file, line);
		std::string name = extractName(line);
		std::getline(file, line);
		std::string substring = line.substr(line.find(":")+1);
		int hp = std::stoi(substring);
		std::getline(file, line);
		substring = line.substr(line.find(":")+1);
		int dmg = std::stoi(substring);
		Player* hi = new Unit(hp,dmg,name);
		return hi;
	}else{
		throw std::runtime_error("File not found: "+filename);
	}
}
