#pragma once
#include <cstdio>
#include<cstdlib>
#include<ctime>

class Gugudan {
	double Score;
	double tElapsed;
public:
	static int NumGames;
	static int NumWins;
	Gugudan()
	{
		Score = 0.0;
		tElapsed = 0.0;
	}
	static bool playOnce();
	double play(int nPlay);

	double getScore() { return Score; };
	double getTimeElapsed() { return tElapsed; }
};