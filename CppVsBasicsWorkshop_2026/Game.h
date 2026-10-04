#pragma once
class Game
{
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

public:
    Game();
	int getNumSticksRemaining();
	bool isPlayerMoveValid(int move);
	void removeSticks(int move);
	bool isGameOver();
	int getMinimumMove();
	int getMaximumMove();

private:
	static const int INITIAL_NUMBER_OF_STICKS = 15;
	static const int MINIMUM_MOVE = 1;
	static const int MAXIMUM_MOVE = 3;
	int numSticksRemaining;
};

