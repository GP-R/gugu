#include "speedgugu.h"

int Gugudan::NumGames = 0;
int Gugudan::NumWins = 0;

bool Gugudan::playOnce()
{
	int num1 = rand() % 8 + 2;
	int num2 = rand() % 8 + 2;
	int result = 0;
	Gugudan::NumGames++;
	printf("[문제%2d]: %2d x %2d = ", Gugudan::NumGames, num1, num2);
	scanf_s("%d", &result);
	if (result == num1 * num2) Gugudan::NumWins++;
	return (result == num1 * num2);
}

double Gugudan::play(int nPlay) {
	clock_t t0 = clock();
	for (int i = 0; i < nPlay; i++) {
		if (playOnce() == false)
			printf("\t틀렸습니다.\n");
	}
	clock_t t1 = clock();
	tElapsed = (double)(t1 - t0) / CLOCKS_PER_SEC;
	Score = (Gugudan::NumGames > Gugudan::NumWins) ? 0.0 : 100 * (5.0*Gugudan::NumGames - tElapsed) / (5.0*Gugudan::NumGames);
	return Score;
}
