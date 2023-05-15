//File : Knight.h
//Name : �B�[�� ���R�� �f�@�p ���|�A
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#pragma once
#include "ChessMan.h"

#include <vector>
using namespace std;


class Knight : public ChessMan
{
public:
	Knight(Color col, Position position);
	vector<Position> Move(Position newPosition) override;
};
