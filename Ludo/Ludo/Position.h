#pragma once
class Position
{
public:
	int r;
	int c;
private:
	Position(int L_r, int L_c);
	int getr();
	int getc();
	~Position() {}
};

