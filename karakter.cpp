#include "Player.h"
#include <fstream>

Player::Player(const std::string& name, int hp, const int dmg) : name(name), hp(hp), dmg(dmg){
}

const std::string& Player::getName() const{
    return name;    
}

int Player::getHP() const{
    return hp;   
}

int Player::getDmg() const{
    return dmg;
}

Player Player::parseUnit(const std::string& fileName){
    std::fstream file;
    std::string line;
    file.open(fileName);
    std::string readline, name, hp, dmg;
    
    const std::string delimiter = ":";
    
    if(file.is_open()){
        while (getline(file, line)) {
            for (int i = 0; i < line.size(); i++) {
                if (isalnum(line[i])) {
                    if (readline == "name"){
                        name += line[i];
                    }
                    else if (readline == "hp"){
                        hp += line[i];
                    }
                    else if (readline == "dmg"){
                        dmg += line[i];
                    }
                    else readline += line[i];
                }
            }
            readline = "";
        }
        
    }
    
    file.close();
    return Player(name,stoi(hp),stoi(dmg));
}
