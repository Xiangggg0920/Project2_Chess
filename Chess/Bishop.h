//File : Bishop.h
//Name : �B�[�� ���R�� �f�@�p ���|�h
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#pragma once
#include "ChessMan.h"
#include <vector>
using namespace std;

class Bishop : public ChessMan
{
public:
	Bishop(Color col, Position position);
	vector<Position> Move(Position newPosition) override;
};
