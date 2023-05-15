//File : GameManager.h
//Name : �B�[�� ���R�� �f�@�p ���|�A
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#pragma once
#include "ChessMan.h"
#include <vector>
using namespace std;

class King : public ChessMan
{
public:
	King(Color col, Position position);
	vector<Position> Move(Position newPosition) override;
};
