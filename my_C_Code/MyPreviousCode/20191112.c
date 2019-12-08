//#include<stdio.h>
//#include<windows.h>
//
//void Forecast(int a,int b,int c,int d,int e)
//{
//	for (a = 0; a <= 5; a++) //a的所有情况
//	{
//		for (b = 0; b <= 5; b++) //b的所有情况
//		{
//			for (c = 0; c <= 5; c++)  //c的所有情况
//			{
//				for (d = 0; d <= 5; d++)  //d的所有情况
//				{
//					for (e = 0; e <= 5; e++)  //e的所有情况
//					{
//						//A选手说：B第二，我第三；
//						//B选手说：我第二，E第四；
//						//C选手说：我第一，D第二；
//						//D选手说：C最后，我第三；
//						//E选手说：我第四，A第一；
//						//每个人说对一半，那么半句是1，半句是0，1+0=1,由此判断
//						if (((b == 2) + (a == 3) == 1) &&   
//							((b == 2) + (e == 4) == 1) && \
//							((c == 1) + (d == 2) == 1) && \
//							((c == 5) + (d == 3) == 1) && \
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)//a,b,c,d,e 5人的名次唯一，1*2*3*4*5=120，由此判断
//							{
//								printf("A为%d名\n", a);
//								printf("B为%d名\n", b);
//								printf("C为%d名\n", c);
//								printf("D为%d名\n", d);
//								printf("E为%d名\n", e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	Forecast(A,B,C,D,E);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	char killer;
//	for (killer = 'A'; killer < 'D'; killer++)
//	{
//			//A说：不是我。
//			//B说：是C。
//			//C说：是D。
//			//D说：C在胡说
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c是凶手\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}


//打印杨辉三角
#pragma warning(disable:4996)
#include<stdio.h>
#include<windows.h>
void print(int a[][100], int n)
{
	int i = 0,j=0;

	for (; i < n; i++)
	{
		for (j=0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	/*for (; i < n; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[100][100] = { 0 };
	int n = 0;
	printf("please enter number : ");
	scanf("%d", &n);
	print(a,n);
	system("pause");
	return 0;
}

//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int n = 0;
//	printf("please enter number : ");
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int a[10][10] = {0};
//	for (i = 0; i < n; i++)
//	{
//		a[i][i] = 1;
//		a[i][0] = 1;
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%2d", a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}









