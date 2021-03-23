#include "speedgugu.h"

bool Gugudan::playOnce(Gugudan game)
{
	game.num1 = rand() % 8 + 2;
	game.num2 = rand() % 8 + 2;

	game.NumGames++;
	printf("[문제%2d]: %2d x %2d = ", game.NumGames, game.num1, game.num2);
	scanf_s("%d", &game.result);
	if (game.result == game.num1 * game.num2) game.NumWins++;
	return (game.result == game.num1 * game.num2);
}

double Gugudan::play(Gugudan game, int nPlay) {
	clock_t t0 = clock();
	for (int i = 0; i < nPlay; i++) {
		if (playOnce(game) == false)
			printf("\t틀렸습니다.\n");
	}
	clock_t t1 = clock();
	tElapsed = (double)(t1 - t0) / CLOCKS_PER_SEC;
	Score = (game.NumGames > game.NumWins) ? 0.0 : 100 * (5.0*game.NumGames - tElapsed) / (5.0*game.NumGames);
	return Score;
}