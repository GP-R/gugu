#define SQUARE(x) (x*x)
#include"speedgugu.h"

int main()
{
	Gugudan game;
	srand((unsigned)time(NULL));

	int nPlay = 10;
	printf("[���ǵ� ������ ����]\n\n");
	printf("����� ������ �Ƿ��� �׽�Ʈ�ϼ���.!!!\n");
	printf("%d�� �׽�Ʈ �ϰڽ��ϴ�.\n", nPlay);
	printf("ũ�� ��ȣ���� �Ͻð�...\n �غ�Ǹ� ���͸� ��������...");
	getchar();
	system("cls");

	double score = game.play(game, nPlay);
	printf("\n���� = %4.1f��(�� %4.1f��)\n", score, game.tElapsed);
	return 0;
}