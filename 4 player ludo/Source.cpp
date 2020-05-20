#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<mmsystem.h>
using namespace std;
#include"Board.h"

int main()
{
	//PlaySound(TEXT("track.wav"), NULL, SND_ASYNC);
	Board B;
	B.Khel();
	return _getch();
}

