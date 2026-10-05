#pragma once
#include <string>
class Player
{
public:
	Player(std::string name);
	std::string getPlayerName() const;
private:
	std::string PlayerName;
};

