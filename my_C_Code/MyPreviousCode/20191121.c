#pragma warning(disable:4996)
#include "string.h"
//#include<stdio.h>
//#include<windows.h>
//#include<math.h>
////unsigned int reverse_bit(unsigned int value)
////{
////	int a[32] = { 0 };
////	int i = 0;
////	unsigned int num = 0;
////	for (i=31; i >=0; i--)
////	{
////		a[i] = value & 1;
////		value = value >> 1;
////	}
////	for (i =0; i <=31; i++)
////	{
////		if (a[i] == 1)
////		{
////			num = num+pow(2,i);
////		}
////	}
////	
////	return num;
////}
//unsigned int reverse_bit(unsigned int value)
//{
//	int ret = 0;
//	int a = 0;
//	for (int i = 0; i < 31; i++)
//	{
//		a = value & 1;
//		ret = ret | a;
//		ret = ret << 1;
//		value = value >> 1;
//	}
//	return ret;
//}
//int main()
//{
//	unsigned int n = 0;
//	printf("please enter number:");
//	scanf("%d", &n);
//	unsigned int res = 0;
//	res=reverse_bit(n);
//	printf("%u\n", res);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please enter two numbers : ");
//	scanf("%d %d", &a, &b);
//	b = b - a;
//	b = b >> 1;
//	a = a + b;
//	printf("平均值为%d\n", a);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int size = 0;
//	int ret = 0;
//	int a[] = { 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6 };
//	size=sizeof(a)/sizeof(a[0]);
//	for (int i = 0; i < size; i++)
//	{
//		ret = ret^a[i];//异或可以遵循交换律，两个相同的数异或为0，总体异或起来结果就是单蹦的数字
//	}
//	printf("%d只出现一次\n",ret);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//void Reverse_All(char *s)
//{
//	char *start = s;
//	char *end = s;
//	while (*s != '\0')
//	{
//		end++;
//	}
//	--end;
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//
//void Reverse_Every(char *s)
//{
//	while (*s != '\0')
//	{
//		char *start = s;
//		char *end = s;
//		while (*end != ' '&&*end != '\0')
//		{
//			++end;
//		}
//		--end;
//		while (start < end)
//		{
//			char temp = *start;
//			*start = *end;
//			*end = temp;
//			++start;
//			--end;
//		}
//		while (*s != ' '&&*s != '\0')
//		{
//			++s;
//		}
//		if (*s != '\0')
//		{
//			++s;
//		}
//	}
//}
//int main()
//{
//	char string[] = "student a am i";
//	printf("%s", string);
//	Reverse_All(string);
//	printf("%s", string); 
//	Reverse_Every(string);
//	printf("%s", string);
//	system("pause");
//	return 0;
//}


//作业13第一题，使用冒泡方法去交换偶数和奇数

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#include<stdio.h>
//#include<windows.h>
//void adjust(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{ 
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] % 2 == 0 && a[j + 1] % 2 != 0)
//			{
//				int temp = 0;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = sizeof(a) / sizeof(a[0]); 
//	adjust(a, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}	
//	system("pause");
//	return 0;
//}

//作业13第二题，杨氏矩阵

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int a[3][3] = {1,2,3,4,5,6,7,8,9};
//	printf("请输入你想查找的数字： ");
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int j = 0;
//	if (a[2][2] >= num)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (a[i][j] == num)
//				{
//					printf("%d在这个数组中 \n",num);
//					break;
//				}
//			}
//		}
//	}
//	else
//	{
//		printf("在这个数组中找不到该数字\n");
//	}
//	if (i == j&&i == 3&&j==3)
//	{
//		printf("没找到\n");
//	}
//	system("pause");
//	return 0;
//}


//作业14第一题。

//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//void Left_rotate(char* a,int len,int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char temp = *(a + len - 1);
//		for (j = len - 1; j>0; j--)
//		{
//			*(a + j) = *(a + j - 1);
//		}
//		*a = temp;
//	}
//
//}
//
//int main()
//{
//	char a[] = "ABCD";
//	int k = 0;
//	printf("请输入想左旋转的个数： ");
//	scanf("%d", &k);
//	int len = strlen(a);
//	printf("before:%s \n", a);
//	Left_rotate(a, len,k);
//	printf("after:%s \n", a);
//	system("pause");
//	return 0;
//}



//
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//void Left_rotate(char* a, int len, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char temp = *(a + len - 100);
//		for (j = len - 1; j>0; j--)
//		{
//			*(a + j) = *(a + j - 1);
//		}
//		*a = temp;
//	}
//
//}
//
//int main()
//{
//	//char a[] = "ABCD";
//	char a[10] = "";
//	scanf("%s", &a);
//	int k = 0;
//	printf("请输入想左旋转的个数： ");
//	scanf("%d", &k);
//	int len = strlen(a);
//	printf("before:%s \n", a);
//	Left_rotate(a, len, k);
//	printf("after:%s \n", a);
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<windows.h>
#include<string.h>
int left_judge(char a[], char b[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		char temp = a[0];
		for (j = 1; j <= len - 1; j++)
		{
			a[j - 1] = a[j];
		}
		a[j-1] = temp;
		if (strcmp(a, b)==0)
		{
			return 1;
		}
	}
	return -1;
}
int right_judge(char a[], char b[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		char temp = a[len-1];
		for (j = len - 2; j >= 0; j--)
		{
			a[j+1] = a[j];
		}
		a[0] = temp;
		if (strcmp(a, b) == 0)
		{
			return 1;
		}
	}
	return -1;
}
int main()
{
	char a[10] = {0};
	char b[10] = {0};
	printf("请输入原始字符串：a= ");
	scanf("%s", &a);
	printf("请输入变化后的字符串b= ");
	scanf("%s", &b);
	char c[10] = {0};
	strcpy(c,a);
	if (strlen(a) == strlen(b))
	{
		int len = strlen(a);
		int lret = left_judge(a, b,len);
		int rret = right_judge(a, b, len);
		if (lret == 1 || rret == 1)
		{
			printf("%s是%s旋转成的字符串\n", c, b);
		}
		else
		{
			printf("%s不是%s旋转成的字符串\n", c, b);
		}
	}
	else
	{
		printf("%s不是%s旋转成的字符串\n", c, b);
	}
	system("pause");
	return 0;
}




//#include "stdio.h"
//
//char* left(char *str, int len, int k){
//	int i,j;
//	for (i = 0; i < k; i++){
//		char temp = str[0];
//		int len = strlen(str);
//		for (j = 1; j <= len - 1; j++){
//			str[j - 1] = str[j];
//			printf("%c\n", str[j]);
//		}
//		printf("%d\n", j);
//		str[j - 1] = temp;
//		printf("%s\n", str);
//	}
//	return str;
//}
//
//int judge_left(char *T,char *S){
//	int length_T = strlen(T);
//	for (int k = 0; k < length_T; k++)
//	{
//		int flag = 0;
//		char *strT = left(S, strlen(S), k + 1);
//		flag = strcmp(T, strT);
//		return flag;
//	}
//}
//
//int main()
//{
//	char str[] = "abcd";
//	char str_T[] = "cdab";
//	int flag = 0;
//	flag = judge_left(str_T,str);
//	if (flag == 1){
//		printf("YES!\n");
//	}
//	else{
//		printf("None!\n");
//	}
//	system("pause");
//	return 0;
//}


