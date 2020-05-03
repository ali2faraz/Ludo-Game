#pragma once
#include"Dice.h"
class Board {};
class Player{};
class Ludo
{
private:
	Board B;
	Dice D;
	Player* P;
	int turn;
public:
	void Init();
	void StartScreen();
	void GetMove();
	bool IsLegalMove();
	void StartGame();
	bool IsGameOver();
	void TurnChange();
	void UpdatePlayerPosition();
};

