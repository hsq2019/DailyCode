#include "game.h"
int Guess()
{
	int a = 0;
	a = rand() % 2;
	int num = 0;
	printf("��Ӳ�ҵ������棬����Ϊ1������Ϊ0>");
	scanf("%d", &num);
	if (num == a)
	{
		printf("��¶��ˣ�������\n");
		return 1;
	}
	else
	{
		printf("��´��ˣ���������\n");
		return 0;
	}
}

void Initboard(char board[][COL], int row, int col)//��ʼ������
{
	int i = 0;
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			board[i][j] = INIT;
		}
	}
}
void Showboard(char board[][COL], int row, int col)//��ʾ
{
	printf(" |  1  |  2  |  3   \n ");
	printf("___________________\n");
	int i = 1;
	for (; i <= row; i++)
	{
		printf("%d  |", i);
		int j=0;
		for (; j < col; j++)
		{
			printf("  %c |", board[i - 1][j]);
		}
		printf("\n");
		printf("___________________\n");

	}

}
char Judge(char board[][COL], int row, int col)   //�ж�'
{
	int i = 0;
	for (; i < row; i++)
	{
		if (board[i][0] != INIT && \
			board[i][0] == board[i][1] && \
			board[i][1] == board[i][2])//�ж�����û������һ�ߣ�����������㿴������'X'����'O'
		{
			return board[i][0];
		}
	}
	i = 0;
	for (; i < col; i++)
	{
		if (board[0][i] != INIT && \
			board[0][i] == board[1][i] && \
			board[0][i] == board[2][i])//�ж�����û������һ�ߣ�����������㿴������'X'����'O'
		{
			return board[0][i];
		}
	}
	if (board[1][1] != INIT&&\
		board[0][0] == board[1][1] &&\
		board[1][1] == board[2][2])//�ж϶Խ���
	{
		return board[1][1];
	}
	if (board[1][1] != INIT&&\
		board[0][2] == board[1][1] && \
		board[1][1] == board[2][0])//�ж϶Խ���
	{
		return board[1][1];
	}
	for (i = 0; i < row; i++)//�ж��Ƿ���
	{
		int j = 0;
		for (; j < col; j++)
		{
			if (board[i][j] == INIT)
			{
				return 'N'; 
			}
		}
	}
	return 'F';
}
void ComputerMove(char board[][COL], int row, int col)//��������
{
	while (1){
		Sleep(1000);
	int x = rand() % row;
	int y = rand() % col;
		if (board[x][y] == INIT)
		{
			board[x][y] = C_COLOR;
			break;
		}
	}
}
void game()
{
	srand((unsigned long)time(NULL));
	char board[ROW][COL];
	Initboard(board, ROW, COL);//�������
	char result = 0;
	int who = Guess();
	int x = 0, y = 0;
	do{
		system("cls");
		Showboard(board, ROW, COL);//չʾ����
		switch (who){
		case 1:
			printf("�����ӣ�> ");
			scanf("%d %d", &x,&y);
			if (x <= 0 || x > 3 || y <= 0 || y > 3)//�ж������Ƿ�Խ��
			{
				printf("����Խ�磡���������룡\n");
				continue;
			}
			if (board[x - 1][y - 1] != ' ')//�ж�λ���Ƿ�ռ��
			{
				printf("��λ���������ӣ����������룡\n");
				continue;
			}
			board[x - 1][y - 1] == P_COLOR;
			who = 0;
			printf("��һ���꣬������˼��\n");
			break;
		case 0:
			ComputerMove(board, ROW, COL);//��������
			printf("�������꣬��˼����\n"); 
			who = 1;
			break;
		default:
			break;
		}
		result=Judge(board, ROW, COL);//�ж�˭Ӯ˭��
		if (result != 'N')//'N'��next 'F'��full 'X'��Ӯ 'O'����Ӯ
		{
			break;
		}
	} while (1);
	if (result == P_COLOR)
	{
		printf("��ϲ��!��ʤ��\n");
	}
	else if (result == C_COLOR)
	{
		printf("���ź������Ի�ʤ\n");
	}
	else
	{
		printf("ƽ�֣�");
	}
	printf("Ҫ��Ҫ����һ�Σ�\n");
}