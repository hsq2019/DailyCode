#include "game.h"
void Menu(){                 /*菜单*/
	printf("########################################\n");
	printf("######   欢迎来到三子棋游戏    #########\n");
	printf("###  1.play ##########  2.exit   #######\n");
	printf("########################################\n");
	printf("请选择》》》》》\n");
}
int main(){
	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){         /*选择 1;游戏   2:退出*/
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("您的选择有误，请重新选择\n");
			break;
		}
	}
	printf("Bye Bye!欢迎再来挑战\n");
	system("pause");
}