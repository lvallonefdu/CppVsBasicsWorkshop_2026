#pragma once
#include <string>

class UI
{
	/// @class UI
	/// @brief Nim UI class supports reading and writing to the console
	///  Scope: writes messages to console and reads user input from console (as strings)
	/// Stateless class, all methods are static, no constructor 
	///   (call methods directly - e.g. UI::getPlayerInput(“Enter your name: “)
	/// 
	/// Methods:
	///  -displayMessage(string) - outputs string to console.  No return value.
	///  -getPlayerInput(string) - outputs string (prompt) to console.  returns string as entered by user.
    
public:
	static void displayMessage(std::string message);
	static std::string getPlayerInput(std::string prompt);



};

