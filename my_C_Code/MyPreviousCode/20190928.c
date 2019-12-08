#pragma warning(disable:4996)
//#include<stdio.h>
//#include<windows.h>
//#include<math.h>
/*int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d  ", i, j, i*j);
		printf("\n");
	}
	system("pause");

	return 0;
}*/
//int main()
//{
//	int i;
//	int count = 0;
//	int flag = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
//			printf("%d ", i);
//			count++;
//			flag++;
//		}
//		if (count % 10 == 0)
//		{
//			if (flag != 0)
//			{
//				printf("\n");
//				flag = 0;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0){
//			if (i % 100 != 0)
//				printf("%d ", i);
//		}
//	    if (i % 400 == 0)
//		{
//			printf("%d", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i,j;
//	for (i = 1; i <= 200; i++)
//	{
//		for (j = 2; j <= (int)(sqrt(i));j++)
//		if (i % j == 0)
//			break;
//		if (i >= j)
//			printf("%d ",i);
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a[10] = { 2, 5, 1, 8, 10, 11, 50, 12, 44, 15 };
//	printf("这组数为");
//	int i;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	printf("\n");
//	int max = a[0];
//	for (i = 0; i <= 9; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("这组数的最大值是%d\n", max);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int x,y,z;
//	int i;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &x, &y, &z);
//	if (x < y)
//	{
//		i = x;
//		x = y;
//		y = i;
//	}
//	if (x < z)
//	{
//		i = x;
//		x = z;
//		z = i;
//	}
//	if (y < z)
//	{
//		i = y;
//		y = z;
//		z = i;
//	}
//	printf("从大到小排列%d %d %d",x, y, z);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请任意输入两个数：");
//	scanf("%d%d", &a, &b);
//	while ((a - b) != 0)
//	{
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("最大公约数为：%d\n", b);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 5, 4, 3, 2, 1 };
//	int c[5];
//	int i = 0;
//	printf("a数组为：");
//	for (; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("b数组为：");
//	i = 0;
//	for (; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	printf("交换后\n");
//	i = 0;
//	for (; i < 5; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//	i = 0;
//	printf("a数组为：");
//	for (; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	i = 0;
//	printf("b数组为：");
//	for (; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int i = 1;
//	int j = 2;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum;
//	for (; i <= 100;i+=2 )
//	{
//		sum1+= 1 / i;
//	}
//	for (; j <= 100; j+=2)
//	{
//		sum2+= 1 / j;
//	}
//	sum = sum1 - sum2;
//	printf("%f", sum);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (; i <= 100; i++)
//	{
//		int j = i / 10;
//		if (i % 10 == 9 ||j==9 )
//		{
//			sum++;
//		}
//	}
//	printf("1~100内含9的数有%d个\n", sum);
//	system("pause");
//	return 0;
//}

