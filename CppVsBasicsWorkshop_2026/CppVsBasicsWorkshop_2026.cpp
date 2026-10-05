// CppVsBasicsWorkshop_2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "UI.h"

/*****************************************************************
 * \file   CppVsBasicsWorkshop_2026.cpp
 * \brief  main() program to play Nim, a two-player game where players take turns removing 1 to 3 sticks from a shared pile. The player who removes the last stick wins.
 *
 * Version supports two human players
 *
 *
 * \author Lee
 * \date   October 2026
 *********************************************************************/

// prototype for the helper function(s)
void displayGameIntro();


int main()
{
	displayGameIntro();
	return 0;
}

/**
 * @brief helper function to display the game intro message.
 *   
 * @internal
 * defines the message strings, which are then printed to the console using std::cout.
 * 
 * ToDo - use UI class for displaying messages to the user (ie replace cout with UI::displayMessage() or similar)
 */
void displayGameIntro() {
    const std::string WELCOME_MESSAGE = "\n\n\t\t\t\tWelcome to the 2026 C++ Basics Workshop!\n";
	const std::string INSTRUCTIONS = "In this workshop, you will learn the basics of C++ programming, including variables, data types, control structures, functions, and more.\n\n";
    const std::string GAME_RULES_LINE1 = "Nim is a two-player, turn-based game in which players take turns removing 1 to 3 sticks from a shared pile.\n";
    const std::string GAME_RULES_LINE2 = "The player who removes the last stick wins. The game continues until all sticks have been removed.\n";

    UI::displayMessage(WELCOME_MESSAGE);
    UI::displayMessage("");
    UI::displayMessage(INSTRUCTIONS);
    UI::displayMessage("");
    UI::displayMessage(GAME_RULES_LINE1);
    UI::displayMessage(GAME_RULES_LINE2);
    UI::displayMessage("");
}