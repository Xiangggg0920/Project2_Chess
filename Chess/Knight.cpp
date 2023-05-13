//File : Knight.cpp
//Name : �B�[�� ���R�� �f�@�p ���|�h
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#include "Knight.h"

Knight::Knight(Color col, Position position) : ChessMan(col, position)
{
	if (col == Color::white)
	{
		this->icon = 'n';
	}
	else
	{
		this->icon = 'N';
	}
};

vector<Position> Knight::Move(Position newPosition) 
{
	vector<Position> accessable = { {position.y - 1, position.x - 2}, {position.y + 1, position.x - 2},
					   {position.y - 2, position.x - 1}, {position.y + 2, position.x - 1},
					   {position.y - 2, position.x + 1}, {position.y + 2, position.x + 1},
					   {position.y - 1, position.x + 2}, {position.y + 1, position.x + 2} };
	return accessable;
}