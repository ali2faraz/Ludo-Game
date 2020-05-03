#pragma once
#include"Position.h"
//class Position 
//{
//protected:
//	int r, c;
//public:
//	Position(int ri,int ci)
//	{
//		r = ri, c = ci;
//	}
//	void setval(int ri,int ci)
//	{
//		r = ri; c = ci;
//	}
//	Position getval()
//	{
//		Position A(r, c);
//		return A;
//	}
//};
class Dice
{
private:
	Position P;
	int dicevalue;
public:
	void RollDice();
	void DisplayDice();
};

