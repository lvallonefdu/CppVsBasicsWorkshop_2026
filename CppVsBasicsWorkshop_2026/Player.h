#pragma once
#include <iostream>
#include <string>
class Player
{
	/// @class Player

/// @brief Nim Player class represents players in the game, Players have names.  Each object is a unique player

/// Scope: initially, saves and provides access to the player’s name

/// Methods:

/// -Player(string) - constructor, instantiates object with the player’s name

///     (note: initially - no requirements on player’s name (e.g. length, allowable characters, etc.)

/// -string getPlayerName() - returns player’s name in a C++ string

/// Private data

///    string PlayerName - name provided when player was created

public:
	Player(std::string name);
	std::string getPlayerName()const;
private:
	std::string PlayerName;
};

