//File : ViewManager.h
//Name : �B�[�� ���R�� �f�@�p ���|�A
//First Update:2023/5/3
//Last Update:2023/5/15
//Description:Chess

#pragma once

class GameManager;

class ViewManager
{
private:
	GameManager* gm;
public:
	ViewManager(GameManager* game);
	void printBoard();
};