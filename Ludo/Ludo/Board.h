#pragma once
#include <iostream>
#include"Piece.h"
#include"Ludo.h"

using namespace std;

class Board
{
protected:
	Piece* LudoB[11][11];
	int stops[12];
public:
	Board();
	void PrintBoard();
};

