//File : GameManager.h
//Name : �B�[�� ���R�� �f�@�p ���|�h
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#pragma once
#include "Board.h"

class GameManager
{
private:
	Board bd;
public:
	GameManager();
	void StartGame();
};