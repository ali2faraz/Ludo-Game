#pragma once
#include<iostream>
#include"Pieces.h"
using namespace std;
class Blue : public Pieces
{
public:
	Blue(color c, Position p, Board* b) : Pieces(c, p, b)
	{
	}
	virtual char Draw()
	{
		return '#';
	}
	virtual char Undraw()
	{
		return' ';
	}
	virtual void DrawP(int brn, int bcn, int rdim, int cdim, int c, char s)
	{
		colour(c);
		int sr = brn * rdim + 1;
		int sc = bcn * cdim + 1;
		PrintCircle(sr + 1, sc + 1, 1, s, 0, 360);
		/*PrintHollowBox(P.x, P.y, 3, 3, -37, 16);*/
	}
};

