#pragma once
#include"Position.h"
#include"Board.h"
class Dice
{
private:
	Position P;
	int dicevalue;
public:
	Dice();
	void RollDice();
};

