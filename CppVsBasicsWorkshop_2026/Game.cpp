#include "Game.h"
#include <stdexcept>
#include <string>

 /*****************************************************************
  * \file   Game.cpp
  * \brief  Logic for playing the game of Nim.  Includes tracking the number of sticks remaining and game status.
  *
  * \internal
  *    Scope includes: defining game constants (initial # sticks, valid moves), validating and processing moves
  *      tracking # of sticks remaining, and determining if the game is over.
  *
  *
  * \author Lee
  * \date   October 2026
  *********************************************************************/

/// @brief Game constructor, initializes number of sticks.
Game::Game() {
	numSticksRemaining = INITIAL_NUMBER_OF_STICKS;
}

/// @brief gets the number of sticks remaining in the game.
/// @returns an integer representing the number of sticks remaining in the game.
int Game::getNumSticksRemaining() {
	return numSticksRemaining;
}

/// @brief  validates player's move game rules (>= MINIMUM_MOVE and <= MAXIMUM_MOVE and < number of sticks remaining)
/// @param move integer representing the number of sticks the player wants to remove from the pile
/// @return true if the move is valid, false otherwise
bool Game::isPlayerMoveValid(int move) {
	return (move >= MINIMUM_MOVE && move <= MAXIMUM_MOVE && move <= numSticksRemaining);
}

/// @brief removes specified # of sticks from the pile
/// @param move integer # of sticks to remove from pile, validate prior to calling
/// @exception invalid_argument if move is invalid (doesn't follow game rules)
void Game::removeSticks(int move) {
	if (isPlayerMoveValid(move)) {
		numSticksRemaining -= move;
	}
	else {
		throw std::invalid_argument("Invalid move: " + std::to_string(move));  // main() should validate move prior to calling this method
	}
}

/// @brief checks if the game is over
/// @return true if the game is over, false otherwise
bool Game::isGameOver() {
	return (numSticksRemaining == 0);  // game is over when there are no sticks remaining, may want to add a check for negative sticks remaining
}

/// @brief  minimum integer # of sticks for a valid move
/// @return integer for minimum # of sticks
int Game::getMinimumMove() {
	return MINIMUM_MOVE;
}

/// @brief  maximum integer # of sticks for a valid move
/// @return integer for maximum # of sticks
int Game::getMaximumMove() {
	return MAXIMUM_MOVE;
}

/*
 * <from high level design>
 * Constants(private) - INITIAL_NUMBER_OF_STICKS, MINIMUM MOVE, MAXIMUM MOVE
 * Data(private) - number of sticks remaining
 * Methods
 *        Game() constructor - initializes # of sticks
 *        getNumSticksRemaining() - returns # of sticks remaining in current game
 *        isPlayerMoveValid(int) - True if valid move, false otherwise
 *        removeSticks(int) - updates game returning # of sticks(never < 0)
 *            Note: will assert if # of sticks is invalid
 *        isGameOver() - True if game over, False otherwise
 *        getMinimumMove(), getMaximumMove() - integers representing minimum and maximum # of sticks for a valid move
 */