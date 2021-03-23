#pragma once
#include <cstdio>
#include<cstdlib>
#include<ctime>

class Gugudan {
	int num1;
	int num2;
	int result;
public:
	int NumGames;
	int NumWins;
	double Score;
	double tElapsed;
	Gugudan()
	{
		num1 = 0;
		num2 = 0;
		result = 0;
		NumGames = 0;
		NumWins = 0;
		Score = 0.0;
		tElapsed = 0.0;
	}
	static bool playOnce(Gugudan game);
	double play(Gugudan game, int nPlay);
};