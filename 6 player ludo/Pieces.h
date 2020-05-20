#pragma once
enum color { green = 1, blue = 2, turqiose = 3, gray = 4, red = 5, purple = 6 };
#include"Position.h"
#include<Windows.h>
#include<iostream>
using namespace std;
class Board;
class Pieces
{
protected:
	Position P;
	Board* B;
	color C;
public:
	bool IsOpen;
	bool CanGo;
	bool IsHome;
	Pieces(color c, Position p, Board* b) : C(c), P(p), B(b)
	{
		IsOpen = false;
		IsHome = false;
		CanGo = false;
	}
	color getcolor()
	{
		return C;
	}
	virtual char Draw() = 0;
	virtual char Undraw() = 0;
	virtual void DrawP(int brn, int bcn, int rdim, int cdim, int c,char s) = 0;
	void gotoRowCol(int rpos, int cpos)
	{
		COORD scrn;
		HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
		scrn.X = cpos;
		scrn.Y = rpos;
		SetConsoleCursorPosition(hOuput, scrn);
	}
	void colour(int k)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, k);
	}
	void PrintCircle(int cr, int cc, int R, char sym, int st, int et)
	{
		for (int th = st; th <= et; th++)
		{
			int r = (-1) * R * sin(th * 3.1415926535897932384626433832795 / 180) + cr;
			int c = R * cos(th * 3.1415926535897932384626433832795 / 180) + cc;
			gotoRowCol(r, c);
			cout << sym;
		}
	}
	~Pieces() {}
};