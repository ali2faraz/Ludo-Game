#pragma once
#include"Position.h"
#include"Pieces.h"
class Board;
class Players
{
protected:
	Pieces* P[4];
public:
	Players(color c, Position p, Board* b) 
	{}
	~Players() {}
};

