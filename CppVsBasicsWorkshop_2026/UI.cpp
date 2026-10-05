#include "UI.h"
#include <iostream>

void UI::displayMessage(std::string message) {
	std::cout << message << std::endl;
}

std::string UI::getPlayerInput(std::string prompt) {
	std::cout << prompt;
	std::string input;
	std::getline(std::cin, input);
	return input;
}