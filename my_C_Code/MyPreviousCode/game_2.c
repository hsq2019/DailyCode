#include "game.h"
int Guess(){
	int a = 0;
	a = rand() % 2;                       //生成随机0 ，1
	int num = 0;
	printf("硬币已抛，正面是1，反面为0\n");
	scanf("%d", &num);
	if (a == num){
		printf("你猜对了，你先下\n");
		return 1;                       
	}
	else{
		printf("你猜错了，电脑先下\n");
		return 0;                         

	}
}
void InitBoard(char board[][Col], int row, int col){     //初始化棋盘为空格
	int i = 0;
	for (; i < row; i++){
		int j = 0;
		for (; j < col; j++){
			board[i][j] = Init;
		}
	}

}
void ShowBoard(char board[][Col], int row, int col){          //打印棋盘
	printf("  | 1 | 2 | 3 |\n");
	printf("---------------\n");
	int i = 1;
	for (; i <= row; i++){
		printf("%d |", i);
		int j = 0;
		for (; j <col; j++){
			printf(" %c |", board[i - 1][j]);
		}
		printf("\n");
		printf("---------------\n\n");
	}
}
void ComputerMove(char board[][Col], int row, int col){//电脑下
	while (1){
		Sleep(1000);
		int x = rand() % row;                        //随机棋子坐标
		int y = rand() % col;
		if (board[x][y] == Init){                      
			board[x][y] = C_Color;
			break;
		}
	}
}
char Judge(char board[][Col], int row, int col){
	int i = 0;
	for (; i < row; i++){
		if (board[i][0] != ' '&&board[i][0] == board[i][1] && board[i][1] == board[i][2]){
			return board[i][0];   //判断行是否相等，并返回相等的字符，作为谁输赢的判定
		}
	}

	for (i = 0; i < col; i++){
		if (board[0][i] != ' '&&board[0][i] == board[1][i] && board[1][i] == board[2][i]){
			return board[0][i]; //判断列是否相等，并返回相等的字符，作为谁输赢的判定
		}
	}

	if (board[1][1] != ' '&&board[0][0] == board[1][1] && board[1][1] == board[2][2]){
		return board[1][1];  //判断左上右下是否相等，并返回相等的字符，作为谁输赢的判定
	}

	if (board[1][1] != ' '&&board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return board[1][1];  /*判断左下右上是否相等，并返回相等的字符，作为谁输赢的判定*/
	}
	for (i = 0; i < row; i++){
		int j = 0;
		for (; j < col; j++){
			if (board[i][j] == Init){    /*如果棋盘还有空，返回N继续输入*/
				return 'N';
			}
		}
	}
	return 'F';     /*返回F，即棋盘满了*/
}
void Game(){

	srand((unsigned long)time(NULL));  /*随机数种子*/
	char board[Row][Col];                   /*定义棋盘*/
	InitBoard(board, Row, Col);         /*初始化数组*/
	char result = 0;
	int who = Guess();
	int x = 0; int y = 0;
	do{
		system("cls");
		ShowBoard(board, Row, Col);
		switch (who){
		case 1: printf("请落子\n");
			scanf("%d %d", &x, &y);
			if (x <= 0 || x > 3 || y <= 0 || y > 3){
				printf("你的落子位置错误，请重新选择\n");
				continue;
			}
			if (board[x - 1][y - 1] != ' '){
				printf("该位置已被占，请重新选择\n");
				continue;
			}
			board[x - 1][y - 1] = P_Color;
			who = 0;
			printf("你已走完，电脑正在思考......\n");
			break;
		case 0:ComputerMove(board, Row, Col);
			printf("电脑已走完，请思考\n");
			who = 1;
			break;
		default:
			break;
		}

		result = Judge(board, Row, Col);
		if (result != 'N'){
			break;
		}

	} while (1);
	if (result == P_Color){
		printf("恭喜你，你赢了吆\n");
	}
	else if (result == C_Color){
		printf("很抱歉，你输了，再接再厉！\n");
	}
	else {
		printf("很不错！平局\n");
	}
	printf("玩的不错，要不要再来一局！\n");
}