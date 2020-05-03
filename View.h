#pragma once
class View
{
public:
	View();
	~View();
	int Ludo;
	int Controller;
    void StartGame();
	void EndGame();
	void InitBoard();
	void RollDice();
	void DisableDice();
	void UpdateBoard();
};

