#pragma once
#include <iostream>

using namespace std;


class Ludo;
class Piece;

class Board
{
protected:
	Piece* LudoB[11][11];
	int stops[12];
public:
	Board();
	void PrintBoard();
};

