#pragma once
#include <cstdio>
#include<cstdlib>
#include<ctime>
extern double tElapsed;

struct Game {
	int a, b, result;
	Game(int a = 0, int b = 0, int result = 0);
	static bool playGuguOnce(Game a);
	double playSpeedGugu(Game a, int nPlay);
};