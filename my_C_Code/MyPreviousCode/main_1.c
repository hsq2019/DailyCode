#include"mine.h"

void menu()//打印菜单
{
	printf("##########################\n");
	printf("######欢迎来到扫雷游戏#####\n");
	printf("##########################\n");
	printf("####1.play#####2.exit#####\n");
	printf("##########################\n");
	printf("请选择>>> ");
}
int main()
{
	int quit = 0;   
	while (!quit)
	{
		menu();                //打印菜单
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:				  //开始游戏
			game();
			break;
		case 2:               //退出游戏
			quit = 1;
			break;
		default:
			printf("请重新选择！\n");
			break;
		}
	}
	printf("欢迎下次来玩，再见。\n");
	system("pause");
	return;
}