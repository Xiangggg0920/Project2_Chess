//File : Queen.h
//Name : �B�[�� ���R�� �f�@�p ���|�A
//First Update:2023/5/3
//Last Update:2023/5/15
//Description:Chess

#pragma once
#include "ChessMan.h"
#include <vector>
using namespace std;

class Queen : public ChessMan
{
public:
	Queen(Color col, Position position);
	vector<Position> Move(Position newPosition) override;
};
