#pragma once

#include <string>

using namespace std;  // not a good programming practice, as could create scope issues, but don't feel like qualifying all reads & writes

class UI
{
	/*  Stateless class, all methods are static
	 *     Call methods directly.  For example: UI::getPlayerInput("Enter your name: ")
	 * 
	 *   displayMessage(string) - outputs string to console.  No return value.
	 *   getPlayerInput(string) - outputs string (prompt) to console.  returns string as entered by user.
	 */

public:
	static void displayMessage(string message);
	static string getPlayerInput(string prompt);
};