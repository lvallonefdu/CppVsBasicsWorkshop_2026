#pragma once
class Game
{

	/// @file Game.h
	/// @brief Declaration of Game class for playing Nim
	/// @author Lee
	/// @date 2026-10-04
	/// 
	/// @internal public methods
	///   Game() - constructor, no arguments
	///   isPlayerMoveValid(int) - returns true if move is valid, false otherwise
	///   removesSticks(int) - removes specified # of sticks from the pile, validate prior to calling
	///   isGameOver() - returns true if game is over, false otherwise
	///   getMinimumMove() - returns minimum # of sticks for a valid move
	///   getMaximumMove() - returns maximum # of sticks for a valid move

public:
    Game();
	int getNumSticksRemaining();
	bool isPlayerMoveValid(int move);
	void removeSticks(int move);
	bool isGameOver();
	int getMinimumMove();
	int getMaximumMove();

private:
	/// @name Game Class Internal Constants
	static const int INITIAL_NUMBER_OF_STICKS = 15;
	static const int MINIMUM_MOVE = 1;  ///< minimum # of sticks for a valid move
	static const int MAXIMUM_MOVE = 3;  ///< maximum # of sticks for a valid move

	int numSticksRemaining;
};

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