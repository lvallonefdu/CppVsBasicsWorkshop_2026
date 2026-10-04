#include "Game.h"
#include <stdexcept>
#include  <string>

/*
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

Game::Game() {
	numSticksRemaining = INITIAL_NUMBER_OF_STICKS;
}
int Game::getNumSticksRemaining() {
	return numSticksRemaining;
}

bool Game::isPlayerMoveValid(int move) {
	return (move >= MINIMUM_MOVE && move <= MAXIMUM_MOVE && move <= numSticksRemaining);
}

void Game::removeSticks(int move) {
	if (isPlayerMoveValid(move)) {
		numSticksRemaining -= move;
	}
	else {
		throw std::invalid_argument("Invalid move: " + std::to_string(move));  // main() should validate move prior to calling this method
	}
}

bool Game::isGameOver() {
	return (numSticksRemaining == 0);  // game is over when there are no sticks remaining, may want to add a check for negative sticks remaining
}

int Game::getMinimumMove() {
	return MINIMUM_MOVE;
}

int Game::getMaximumMove() {
	return MAXIMUM_MOVE;
}
