#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int num ;
//	printf("please enter number num: ");
//	scanf("%d", &num);
//	int a[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int right = len - 1;
//	int left=0;
//	while (left < right)
//	{
//		int mid = (right + left) / 2;
//		if (a[mid] > num)
//		{
//			right = mid-1;
//		}
//		else if (a[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("没找到\n");
//	}
//	system("pause");
//	return 0;
//}

//折半查找递归

#include<stdio.h>
#include<windows.h>
int search(int *a,int right,int left,int n )   
{
	if (left>right)                            
		return -1;
	int mid = (left + right) / 2;       
	if (a[mid] > n)
	{
		search(a, (mid - 1), left, n);
	}
	else if (a[mid] < n)
	{
		search(a, right, (mid+1), n);
	}
	else
	{
		return mid;
	}
}

int main()
{
	int n;
	printf("please enter your number : ");
	scanf("%d", &n);
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(a) / sizeof(a[0]);
	int right = len - 1;
	int left = 0;
	int res;
	res=search(a, right,left,n);
	if (res == -1)
	{
		printf("not found!");
	}
	else{
		printf(" 下标为 %d\n", res);
	}
	system("pause");
	return 0;
}