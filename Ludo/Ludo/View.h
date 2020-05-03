#pragma once
#include"Ludo.h"
class View
{
public:
	View();
	~View();
	Ludo m_Ludo;
	int Controller;
    void StartGame();
	void EndGame();
	void InitBoard();
	void RollDice();
	void DisableDice();
	void UpdateBoard();
};

