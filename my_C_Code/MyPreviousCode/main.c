#include "game.h"

void menue()
{
	printf("#############################\n");
	printf("####  ��ӭ������������Ϸ�� ####\n");
	printf("#############################\n");
	printf("#####  1.play   2.exit  #####\n"); 
	printf("#############################\n");
	printf("��ѡ��:");
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
			printf("�������,������ѡ��\n");
			break;
		}
	}
	system("pause");
}