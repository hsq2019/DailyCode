#include"mine.h"

void menu()//��ӡ�˵�
{
	printf("##########################\n");
	printf("######��ӭ����ɨ����Ϸ#####\n");
	printf("##########################\n");
	printf("####1.play#####2.exit#####\n");
	printf("##########################\n");
	printf("��ѡ��>>> ");
}
int main()
{
	int quit = 0;   
	while (!quit)
	{
		menu();                //��ӡ�˵�
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:				  //��ʼ��Ϸ
			game();
			break;
		case 2:               //�˳���Ϸ
			quit = 1;
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	}
	printf("��ӭ�´����棬�ټ���\n");
	system("pause");
	return;
}