#include "UI.h"
#include <iostream>
#include <string>

/// @class UI

/// @brief Nim UI class supports reading and writing to the console

///  Scope: writes messages to console and reads user input from console (as strings)

/// Stateless class, all methods are static, no constructor 

///   (call methods directly - e.g. UI::getPlayerInput(“Enter your name: “)

/// Methods:

///  -displayMessage(string) - outputs string to console.  No return value.

///  -getPlayerInput(string) - outputs string (prompt) to console.  returns string as entered by user.

 void UI::displayMessage(std::string message) {
	std::cout << message <<std::endl;
}

 std::string UI::getPlayerInput(std::string prompt) {
	std::cout << prompt;
	std::string input;
	std::getline(std::cin, input);
	return input;
}