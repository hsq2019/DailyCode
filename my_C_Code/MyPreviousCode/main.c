#include "game.h"

void menue()
{
	printf("#############################\n");
	printf("####  欢迎来到三子棋游戏！ ####\n");
	printf("#############################\n");
	printf("#####  1.play   2.exit  #####\n"); 
	printf("#############################\n");
	printf("请选择:");
}
int main()
{
	menue();
	int quit = 0;
	while (!quit)
	{
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			quit = 1;
			printf("bye bye!");
			break;
		default:
			printf("输入错误,请重新选择！\n");
			break;
		}
	}
	system("pause");
}