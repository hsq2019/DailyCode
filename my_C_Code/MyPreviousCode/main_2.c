#include "game.h"
void Menu(){                 /*�˵�*/
	printf("########################################\n");
	printf("######   ��ӭ������������Ϸ    #########\n");
	printf("###  1.play ##########  2.exit   #######\n");
	printf("########################################\n");
	printf("��ѡ�񡷡�������\n");
}
int main(){
	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){         /*ѡ�� 1;��Ϸ   2:�˳�*/
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("����ѡ������������ѡ��\n");
			break;
		}
	}
	printf("Bye Bye!��ӭ������ս\n");
	system("pause");
}