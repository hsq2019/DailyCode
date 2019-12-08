#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d",a,b);
	system("pause");
	return 0;
}*/
//0011    0110	0011用按位异或很不错
//0101	  0101	0110
//0110	  0011	0101

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	int a[10];
//	int max;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//	max = a[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (a[i]>max)
//		{
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}
//假设：所有数据都是成对出现，那就全体异或起来
//int a = 2;
//int b = 3;
//int c = 2;
//int d = 4;
//int ret;
//ret = a^b^c^d;
//printf("ret")


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	int a[10];
//	int max;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//	max = a[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (a[i]>max)
//		{
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int i;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//	for (i = 1; i <= 99; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	sum = sum1 - sum2;
//	printf("%lf ", sum);
//	system("pause");
//	return 0;
//}

//写密码的

//#include<stdio.h>
//#include<windows.h>
////guess number
//int main()
//{
//	char a[32];
//	char b[32];
//	int n = 3;
//	while (n > 0){
//	printf("please enter name: ");
//	scanf("%s", a);
//	printf("please enter password: ");
//	scanf("%s", b);
//		if (strcmp(a, "lucy") == 0 && strcmp(b, "123456") == 0)
//		{
//			printf("login successful!");
//			break;
//		}
//		else
//		{
//			n--;
//			printf("name or password warning ! you have %d time\n", n);
//		}
//	}
//	if (n == 0)
//	{
//		printf("Eixt!\n");
//	}
//	system("pause");
//	return 0;
//}

//大小写改
//
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//		int c = 0;
//		while ((c=getchar())!=EOF)
//		{
//			if(c >= 'a'&&c <= 'z')
//			{
//				putchar(c-32);
//				printf("\n");
//			}
//			else if (c >= 'A'&&c <= 'Z')
//			{
//				putchar(c + 32);
//				printf("\n");
//			}
//			else
//			{
//				continue;
//			}
//	}
//	system("pause");
//	return 0;
//}

//折半查找 

#include<stdio.h>
#include<windows.h>

int main()
{
	int a[] = { 1, 3, 5, 7, 11, 13, 17, 19, 23, 31 };
	int num=0;
	int left = 0;
	int right = (sizeof(a) / sizeof(a[0])) - 1;
	int mid = 0;
	printf("please enter number:");
	scanf("%d", &num);
	while (right >= left)
	{
		mid = (right + left) / 2;
		if (a[mid] > num)
		{
			right = mid - 1;
		}
		else if (a[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}
	if (left <= right)
	{
		printf("找到了，下标为：%d\n",mid);
	}
	else
	{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}

//猜数字游戏（用到随机数）

//#include<stdio.h>
//#include<windows.h>
//#include<time.h>
//void guess()
//{
//	int random_num = rand() % 100 + 1;
//	int i = 0;
//	printf("please guess number: ");
//	while (1){
//		scanf("%d", &i);
//		if (random_num > i)
//		{
//			printf("is small \n");
//		}
//		else if (random_num < i)
//		{
//			printf("is big \n");
//		}
//		else
//		{
//			printf("you are right! the number is %d\n", i);
//			break;
//		}
//	}
//}
//int main()
//{ 
//	srand((unsigned)time(NULL));//中种子
//	guess();
//	system("pause");
//	return 0;
//}

//20191020_homework乘法口诀表

//#include<stdio.h>
//#include<windows.h>
//void multipli(int i)
//{
//	int x,y,z;
//	for (x = 1; x <= i; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			z = x*y;
//			printf("%3d*%d=%d", x, y, z);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i;
//	printf("please enter number: ");
//	scanf("%d", &i);
//	multipli(i);
//	system("pause");
//	return 0;
//}

//20191020_homework两个数交换

//#include<stdio.h>
//#include<windows.h>
//void swap(int* i, int* j)
//{/*
//	int k;
//	k = i;
//	i = j;
//	j = k;*/
//	/*i = i^j;
//	j = i^j;
//	i = i^j;*/
//	*i = *i + *j;
//	*j = *i - *j;
//	*i = *i - *j;
//	
//}
//int main()
//{
//	int i, j;
//	printf("please enter 2 numbers: ");
//	scanf("%d%d", &i, &j);
//	printf("before i=%d, j=%d \n", i, j);
//	swap(&i,&j);
//	printf("swap:i=%d ,j=%d \n", i, j);
//	system("pause");
//	return 0;
//}

//20191020_homework判断是否是闰年
//
//#include<stdio.h>
//#include<windows.h>
//int Leap(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	int result;
//	printf("please enter year : ");
//	scanf("%d", &year);
//	result = Leap(year);
//	if (result)
//	{
//		printf("%d is leapyear\n",year);
//	}
//	else
//	{
//		printf("%d is not leapyear\n", year);
//	}
//	system("pause");
//	return 0;
//}

//20191020_homework判断是不是素数

//#include<stdio.h>
//#include<windows.h>
//int is_prime(int i)
//{
//	int j;
//	for (j = 2; j <= i / 2; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i,result;
//	printf("please enter a number : ");
//	scanf("%d", &i);
//	result=is_prime(i);
//	if (result)
//	{
//		printf("%d yes", i);
//	}
//	else
//	{
//		printf("%d no", i);
//	}
//	system("pause");
//	return 0;
//}

//二级指针

//#include<stdio.h>
//#include<windows.h>
//void Swap(int **pa, int **pb)
//{
//	int temp;
//	temp =*pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int *pb = &b;
//	Swap(pa, pb);
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//20191020_homework数组

//
//#include<stdio.h>
//#include<windows.h>
//void init(int array[],int len)
//{
//	printf("完成数组初始化\n");
//	int i;
//	for (i=0; i < len; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//}
//void empty(int array[], int len)
//{
//	printf("清空数组\n");
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		array[i] = "\0";
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", array[i]);
//	}
//}
//void reverse(int array[], int len)
//{
//	printf("完成数组逆置\n");
//	int i,j;
//	int temp;
//	/*for (i = 0,j=len-1; i <j; i++,j--)
//	{
//		int temp = array[i];
//		array[i] = array[j];
//		array[j] = temp;
//	}*/
//	for (i = 0 ; i < len / 2; i++)
//	{
//		int temp = array[i];
//		array[i] = array[len - 1 - i];
//		array[len - 1 - i] = temp;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a[10];
//	int len = sizeof(a) / sizeof(a[0]);
//	init(a,len);//数组初始化
//	reverse(a, len);//完成数组逆置
//	empty(a, len);//清空数组
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int i,j;
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 1; j <= 7-i; j++){
//			printf(" ");
//	}
//		for (int j = 1; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//	
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//
//void swap(int i, int j)
//{
//	int temp;
//	temp = i;
//	i = j;
//	j = temp;
//	printf("swap:a=%d, b=%d\n", i, j);
//}
//int main()
//{
//	int i, j;
//	printf("please enter your numbers <i,j>:");
//	scanf("%d %d", &i, &j);
//	printf("before : i=%d, j=%d\n", i, j);
//	swap(i, j);
//	system("pause");
//		return 0;
//}


//hw递归 菲格纳切数列

//#include<stdio.h>
//#include<windows.h>
//int Fibonacci(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return (Fibonacci(n - 1) + Fibonacci(n - 2));
//}
//int main()
//{
//	int n=0;
//	printf("pelase enter your number n :");
//	scanf("%d", &n);
//	int res=Fibonacci(n);
//	printf("%d \n",res);
//	system("pause");
//	return 0;
//}


//hw非递归裴波纳契

//#include<stdio.h>
//#include<windows.h>
//int Fibonacci(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else{
//		int x = 1;
//		int y = 1;
//		int z;
//		while (n > 2)
//		{
//			z = y;
//			y = x;
//			x = z + y;
//			n--;
//		}
//		return x;
//	}
//}
//int main()
//{
//	int n;
//	int ret;
//	printf("please enter your number n:");
//	scanf("%d", &n);
//	ret = Fibonacci(n);
//	printf("%d ", ret);
//	system("pause");
//	return 0;
//} 

//编写一个函数实现n^k，使用递归实现 

//#include<stdio.h>
//#include<windows.h>
//int power(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else{
//		return n*(power(n, k - 1));
//	}
//}
//int main()
//{
//	int n,k;
//	int res;
//	printf("please enter your numbers:<n,k>");
//	scanf("%d%d",&n,&k);
//	res=power(n,k);
//	printf("n ^ k = %d \n", res);
//	system("pause");
//	return 0;
//}

//hw写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//#include<stdio.h>
//#include<windows.h>
//int DigitSum(int n)
//{
//	int sum=0;
//	int m=0;
//	if(n)
//	{
//		m = n % 10;
//		sum = m + DigitSum(n/10);
//	}
//	return sum;
//}
//
//int main()
//{
//	int n=0,x;
//	printf("please enter n : \n", n);
//	scanf("%d", &n);
//	x = DigitSum(n);
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}

//hw编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<string.h>
//void reverse_string(char *string)
//{
//	if (*(string++) != '\0')
//	{
//		reverse_string(string);
//	}
//	printf("%c",*(string-1));
//
//}
//int main()
//{
//	char a[] = "abc123";
//	reverse_string(a);
//	system("pause");
//	return 0;
//}

//hw递归和非递归分别实现strlen

//#include<stdio.h>
//#include<windows.h>
//int rec_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//	 return 1 + rec_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//int strlen(char *str)
//{
//	int count = 0,i;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char a[] = "abcd1234";
//	int res1,res2;
//	res1=rec_strlen(a);
//	res2 = strlen(a);
//	printf("递归：%d，非递归：%d\n", res1,res2);
//
//	system("pause");
//	return 0;
//}

//hw递归和非递归分别实现求n的阶乘

//#include<stdio.h>
//#include<windows.h>
//int rec_fact(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if(n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*rec_fact(n-1);
//	}
//}
//int Fact(int n)
//{
//	int sum = 1;
//	for (; n > 0; n--)
//	{
//		sum *= n;
//	}
//	return sum;
//}
//int main()
//{
//	int res1, res2,n;
//	printf("please enter number n: ");
//	scanf("%d", &n);
//	res1=rec_fact(n);
//	res2 = Fact(n);
//	printf("递归 : %d ,非递归 : %d\n", res1, res2);
//	system("pause");
//	return 0;
//}

//递归方式实现打印一个整数的每一位

//#include<stdio.h>
//#include<windows.h>
//void Print(int i)
//{
//	if (i > 9)
//	{
//		 Print(i / 10);
//	}
//	printf("%d  ", i % 10);
//}
//int main()
//{
//	int a=0;
//	printf("please enter number a: ");
//	scanf("%d", &a);
//	Print(a);
//	system("pause");
//	return 0;
//}