#pragma once

#include <string>
using namespace std;

class Player
{
	/*
	 * class Player
	 *   Scope: represents a player in the game
	 * 
	 * Methods:
	 *    Player(string name) - constructor, initializes playerName with the provided name
	 *    getPlayerName() - returns the player's name as a string
	 */

public:
	Player(string name);
	string getPlayerName();

private:
	string playerName;
};

