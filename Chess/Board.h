#pragma once
#include <iostream>
#include "ChessMan.h"
#include "Knight.h"
#include "Pawn.h"
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
using namespace std;

class Board {
private:
	friend class ChessMan;
	ChessMan::Color starting_color = ChessMan::Color::white;
	bool win = false;
	string winner = "";
public:
	ChessMan* previousboard[8][8] = { nullptr };
	ChessMan* board[8][8] = { nullptr };
	Board();
	void saveCurrentBoard();
	void gotoPreviousBoard();
	int isCheckmated(ChessMan* board[8][8], Position pos);
	bool checkTie();
	void DrawBoard();
	void initMove();
	ChessMan* getChess(Position position);
	bool MoveChess(Position from, Position to);
	ChessMan* EatChess(Position pos);
	void Promotion(Position pos);
};