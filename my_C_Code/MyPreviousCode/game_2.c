#include "game.h"
int Guess(){
	int a = 0;
	a = rand() % 2;                       //�������0 ��1
	int num = 0;
	printf("Ӳ�����ף�������1������Ϊ0\n");
	scanf("%d", &num);
	if (a == num){
		printf("��¶��ˣ�������\n");
		return 1;                       
	}
	else{
		printf("��´��ˣ���������\n");
		return 0;                         

	}
}
void InitBoard(char board[][Col], int row, int col){     //��ʼ������Ϊ�ո�
	int i = 0;
	for (; i < row; i++){
		int j = 0;
		for (; j < col; j++){
			board[i][j] = Init;
		}
	}

}
void ShowBoard(char board[][Col], int row, int col){          //��ӡ����
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
void ComputerMove(char board[][Col], int row, int col){//������
	while (1){
		Sleep(1000);
		int x = rand() % row;                        //�����������
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
			return board[i][0];   //�ж����Ƿ���ȣ���������ȵ��ַ�����Ϊ˭��Ӯ���ж�
		}
	}

	for (i = 0; i < col; i++){
		if (board[0][i] != ' '&&board[0][i] == board[1][i] && board[1][i] == board[2][i]){
			return board[0][i]; //�ж����Ƿ���ȣ���������ȵ��ַ�����Ϊ˭��Ӯ���ж�
		}
	}

	if (board[1][1] != ' '&&board[0][0] == board[1][1] && board[1][1] == board[2][2]){
		return board[1][1];  //�ж����������Ƿ���ȣ���������ȵ��ַ�����Ϊ˭��Ӯ���ж�
	}

	if (board[1][1] != ' '&&board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return board[1][1];  /*�ж����������Ƿ���ȣ���������ȵ��ַ�����Ϊ˭��Ӯ���ж�*/
	}
	for (i = 0; i < row; i++){
		int j = 0;
		for (; j < col; j++){
			if (board[i][j] == Init){    /*������̻��пգ�����N��������*/
				return 'N';
			}
		}
	}
	return 'F';     /*����F������������*/
}
void Game(){

	srand((unsigned long)time(NULL));  /*���������*/
	char board[Row][Col];                   /*��������*/
	InitBoard(board, Row, Col);         /*��ʼ������*/
	char result = 0;
	int who = Guess();
	int x = 0; int y = 0;
	do{
		system("cls");
		ShowBoard(board, Row, Col);
		switch (who){
		case 1: printf("������\n");
			scanf("%d %d", &x, &y);
			if (x <= 0 || x > 3 || y <= 0 || y > 3){
				printf("�������λ�ô���������ѡ��\n");
				continue;
			}
			if (board[x - 1][y - 1] != ' '){
				printf("��λ���ѱ�ռ��������ѡ��\n");
				continue;
			}
			board[x - 1][y - 1] = P_Color;
			who = 0;
			printf("�������꣬��������˼��......\n");
			break;
		case 0:ComputerMove(board, Row, Col);
			printf("���������꣬��˼��\n");
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
		printf("��ϲ�㣬��Ӯ��ߺ\n");
	}
	else if (result == C_Color){
		printf("�ܱ�Ǹ�������ˣ��ٽ�������\n");
	}
	else {
		printf("�ܲ���ƽ��\n");
	}
	printf("��Ĳ���Ҫ��Ҫ����һ�֣�\n");
}