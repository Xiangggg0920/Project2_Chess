//File : Player.h
//Name : �B�[�� ���R�� �f�@�p ���|�A
//First Update:2023/5/3
//Last Update:2023/5/15
//Description:Chess

#pragma once
#include "ChessMan.h"
class GameManager;

class Player
{
private:
	GameManager* gm;
public:
	ChessMan::Color player_color;
	Player(ChessMan::Color color, GameManager* game);
	void playerMove(ChessMan::Color color);
};