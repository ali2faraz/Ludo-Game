#pragma once

#include <iostream>

using namespace std;

class Piece
{
protected:
	char colour;
	bool state;
	bool haskilled;
	int positions;
public:
	Piece();
	void setcolor(char c);
	int getcolor();
	void reset();
};

