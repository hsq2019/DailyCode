#include"mine.h"
void Set_mine(char board[][COL],int row, int col,int *x_p,int *y_p)
{
	int count = MINES;
	while (count>0)
	{
		int x = rand()%10+1;
		int y = rand()%10+1;
		if (board[x][y] == '0')
		{
			count--;
			board[x][y] ='1';
		}
		int i = 1;
		for (; i <= 10; i++)
		{
			int j = 1;
			for (; j <= 10; j++)
			{
				if (board[i][j] == '0')
				{
					*x_p = i;
					*x_p = j;
				}
				break;
			}
		}
	}
}
void Show_Board(char board[][COL], int row, int col)
{
	int i = 1;
	printf("    ");
	for (; i <=10; i++)
	{
		printf("  %d  ", i);
	}
	printf("\n");
	for (i = 1; i <=10; i++)
	{
		printf("-----");
	}
	printf("---\n");
	for (i = 1; i <=10; i++)
	{
		printf(" %d | ", i);
		int j = 1;
		for (; j <=10; j++)
		{
			printf(" %c | ",board[i][j]);
		}
		printf("\n");
		int k;
		for (k = 1; k <=10; k++)
		{
			printf("-----");
		}
		printf("---\n");
	}
}
int GetCount(char board[][COL], int x,int y)
{
	int num = (board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + \
		board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] + \
		board[x + 1][y] + board[x + 1][y + 1])-('0'*8);
	return num;
}
void game()
{
	srand((unsigned long)time(NULL));
	char mine_board[ROW][COL];
	char show_board[ROW][COL];
	memset(mine_board, '0', sizeof(mine_board));
	memset(show_board, '*', sizeof(show_board));
	int no_x;
	int no_y;
	Set_mine(mine_board, ROW, COL,&no_x,&no_y);
	int num = 100 - MINES;
	do{
		system("cls");
		Show_Board(show_board, ROW, COL);
		printf("请输入<x,y> :");
		int x = 0, y = 0;
		scanf("%d %d", &x, &y);
		if (x<1 || x>10 || y<1 || y>10)
		{
			printf("座标有误！请重新输入！\n");
			continue;
		}
		if (show_board[x][y] != '*')
		{
			printf("该位置已被排除，请重新输入！\n");
			continue;
		}
		if (mine_board[x][y] == '1')
		{
			if (num == 80)
			{
				mine_board[no_x][no_y] = '1';
				mine_board[x][y] = '0';
			}
			else{
				printf("boom!\n");
				printf("game over!\n");
				Show_Board(mine_board, ROW, COL);
				printf(" 不过瘾？ 要不要再来一把？\n");
				break;
			}
		}
		int count = GetCount(mine_board, x, y);
		show_board[x][y] = count + '0';
		num--;
	} while (num>0);
}