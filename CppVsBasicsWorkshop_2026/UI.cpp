// UI.cpp
//   Encapsulates the methods to read & write to the UI (for now, the console)

#include <iostream>
#include "UI.h"

/* Nim UI class
 * Scope: writes messages to console and reads user input from console (as strings)
 * 
 * Stateless class, all methods are static, no constructor 
 * 
 * Methods:
 *    displayMessage(string) - outputs string to console.  No return value.
 *    getPlayerInput(string) - outputs string (prompt) to console.  returns string as entered by user.
 */

 // Display a message to the console
void UI::displayMessage(string message) {
    cout << message << endl;
}

// Output prompt to console
// Get player input from the console
string UI::getPlayerInput(string prompt) {
    cout << prompt;
    string input;
    getline(std::cin, input);
    return input;
}
