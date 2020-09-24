Player Player::parsePlayer(std::string fileName)
{
	std::ifstream input_file("players/" + fileName);
	if (input_file.is_open())
	{
		std::string name;
		std::string temp_hp;
		std::string temp_dmg;
		input_file.ignore(1, '{');
		input_file.ignore(1, '\n');
		input_file.ignore(1, '\t');
		std::getline(input_file, name, ',');
		name.erase(std::remove(name.begin(), name.end(), '\"'), name.end());
		name.erase(0, 7);
		input_file.ignore(1, '\n');
		input_file.ignore(1, '\t');
		std::getline(input_file, temp_hp, ',');
		temp_hp.erase(std::remove(temp_hp.begin(), temp_hp.end(), '\"'), temp_hp.end());
		temp_hp.erase(0, 5);
		input_file.ignore(1, '\n');
		input_file.ignore(1, '\t');
		std::getline(input_file, temp_dmg);
		temp_dmg.erase(std::remove(temp_dmg.begin(), temp_dmg.end(), '\"'), temp_dmg.end());
		temp_dmg.erase(0, 6);
		input_file.close();
		int hp = std::stoi(temp_hp);
		int dmg = std::stoi(temp_dmg);
		return Players(name, hp, dmg);
	}
	else throw fileName;
