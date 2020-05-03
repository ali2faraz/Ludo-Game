#pragma once

enum Color { white = 15, black = 0, cyan = 3, green = 2, red = 12 };
class Piece;
class Player
{
private:
	Piece *Ps;
	Color co;
	bool Win;
public:
	Player();
	Player(Color c);
	void SetPieceStatus();
	virtual void draw();
	void SetPieceNumber();
	void GetPieceNumber();
	void SetColor();
	void SetWon();
	void IsWin();
	bool IsLegalMove();
	~Player(){}
};

