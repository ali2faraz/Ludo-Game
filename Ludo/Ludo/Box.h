#pragma once
#include"Piece.h"
class Box
{
public:
	Piece m_Piece;
	Box();
	~Box();
	void AddPiece();
	void RemovePiece();
	void SetColour();
	void SetGoal();
	void SetHouse();
	void SetNumber();


};

