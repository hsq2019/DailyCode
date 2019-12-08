#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int BinartSearch(int a[], int right, int left, int num)
{
	if (right < left){
		return -1;
	}
	int mid = (right + left) / 2;
	if (num > a[mid]){
		BinartSearch(a, right, mid + 1, num);
	}
	else if (num < a[mid])
	{
		 BinartSearch(a, mid - 1, left, num);
	}
	else{
		return mid;
	}
}
int main()
{
	printf("请输入一个你想查找的数：");
	int num = 0;
	scanf("%d", &num);
	int a[] = { 1, 22, 33, 44, 55, 66, 77, 88, 89, 99, 100 };
	int result = 0;
	int left = 0;
	int right = (sizeof(a) / sizeof(a[0]))-1;
	result=BinartSearch(a,right,left,num);
	if (result==-1)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("找到了，在数组下标为%d\n", result);
	}
	system("pause");
	return 0;
}

//#include<stdio.h>
//#include<windows.h>
//int fun(int n)
//{
//	if (n > 2)
//	{
//		return fun(n - 2) + fun(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	printf("请输入你想知道的第几位\n");
//	int n = 0;
//	scanf("%d", &n);
//	int result;
//	result=fun(n);
//	printf("第 %d 位为 %d\n", n, result);
//	system("pause");
//	return 0;
//}
