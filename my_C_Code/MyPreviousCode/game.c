#include "game.h"
int Guess()
{
	int a = 0;
	a = rand() % 2;
	int num = 0;
	printf("猜硬币的正反面，正面为1，反面为0>");
	scanf("%d", &num);
	if (num == a)
	{
		printf("你猜对了，你先下\n");
		return 1;
	}
	else
	{
		printf("你猜错了，电脑先下\n");
		return 0;
	}
}

void Initboard(char board[][COL], int row, int col)//初始化棋盘
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
void Showboard(char board[][COL], int row, int col)//显示
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
char Judge(char board[][COL], int row, int col)   //判断'
{
	int i = 0;
	for (; i < row; i++)
	{
		if (board[i][0] != INIT && \
			board[i][0] == board[i][1] && \
			board[i][1] == board[i][2])//判断行有没有三子一线，如果条件满足看里面是'X'还是'O'
		{
			return board[i][0];
		}
	}
	i = 0;
	for (; i < col; i++)
	{
		if (board[0][i] != INIT && \
			board[0][i] == board[1][i] && \
			board[0][i] == board[2][i])//判断列有没有三子一线，如果条件满足看里面是'X'还是'O'
		{
			return board[0][i];
		}
	}
	if (board[1][1] != INIT&&\
		board[0][0] == board[1][1] &&\
		board[1][1] == board[2][2])//判断对角线
	{
		return board[1][1];
	}
	if (board[1][1] != INIT&&\
		board[0][2] == board[1][1] && \
		board[1][1] == board[2][0])//判断对角线
	{
		return board[1][1];
	}
	for (i = 0; i < row; i++)//判断是否满
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
void ComputerMove(char board[][COL], int row, int col)//电脑落子
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
	Initboard(board, ROW, COL);//清空棋盘
	char result = 0;
	int who = Guess();
	int x = 0, y = 0;
	do{
		system("cls");
		Showboard(board, ROW, COL);//展示棋盘
		switch (who){
		case 1:
			printf("请落子：> ");
			scanf("%d %d", &x,&y);
			if (x <= 0 || x > 3 || y <= 0 || y > 3)//判断落子是否越界
			{
				printf("落子越界！请重新输入！\n");
				continue;
			}
			if (board[x - 1][y - 1] != ' ')//判断位置是否占用
			{
				printf("该位置已有棋子！请重新输入！\n");
				continue;
			}
			board[x - 1][y - 1] == P_COLOR;
			who = 0;
			printf("你一走完，电脑在思考\n");
			break;
		case 0:
			ComputerMove(board, ROW, COL);//电脑落子
			printf("电脑走完，请思考：\n"); 
			who = 1;
			break;
		default:
			break;
		}
		result=Judge(board, ROW, COL);//判断谁赢谁输
		if (result != 'N')//'N'是next 'F'是full 'X'人赢 'O'电脑赢
		{
			break;
		}
	} while (1);
	if (result == P_COLOR)
	{
		printf("恭喜你!获胜！\n");
	}
	else if (result == C_COLOR)
	{
		printf("很遗憾，电脑获胜\n");
	}
	else
	{
		printf("平局！");
	}
	printf("要不要再来一次？\n");
}