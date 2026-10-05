#include "Player.h"

Player::Player(std::string name) {
	PlayerName = name;
}

std::string Player::getPlayerName() const {
	return PlayerName;
}