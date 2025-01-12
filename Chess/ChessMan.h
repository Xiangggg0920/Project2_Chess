//File : ChessMan.h
//Name : �B�[�� ���R�� �f�@�p ���|�h
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#pragma once
#include "Position.h"
#include <vector>
using namespace std;

class ChessMan
{
public:
	friend class Position;
	enum class Color { white, black };
	Position position;
	int step = 0;
	Color color;
	char icon;

	ChessMan(Color col, Position position) : color(col), position(position) {};
	char getIcon() { return icon; };
	int getStep() { return step; };
	Color getColor() { return color; };
	virtual ~ChessMan() {};
	virtual vector<Position> Move(Position newPosition) = 0;
};