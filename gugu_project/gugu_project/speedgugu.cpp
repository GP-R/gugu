#include "speedgugu.h"

static int NumGames = 0;
static int NumWins = 0;
static double Score = 0;
double tElapsed = 0;

Game::Game(int a, int b, int result)
{
	a = 0;
	b = 0;
	result = 0;
}

bool Game::playGuguOnce(Game a)
{
	a.a = rand() % 8 + 2;
	a.b = rand() % 8 + 2;

	NumGames++;
	printf("[문제%2d]: %2d x %2d = ", NumGames, a.a, a.b);
	scanf_s("%d", &a.result);
	if (a.result == a.a * a.b) NumWins++;
	return (a.result == a.a * a.b);
}

double Game::playSpeedGugu(Game a, int nPlay) {
	clock_t t0 = clock();
	for (int i = 0; i < nPlay; i++) {
		if (playGuguOnce(a) == false)
			printf("\t틀렸습니다.\n");
	}
	clock_t t1 = clock();
	tElapsed = (double)(t1 - t0) / CLOCKS_PER_SEC;
	Score = (NumGames > NumWins) ? 0.0 : 100 * (5.0*NumGames - tElapsed) / (5.0*NumGames);
	return Score;
}