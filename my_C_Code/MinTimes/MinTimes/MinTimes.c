#include<stdio.h>
#include<windows.h>
int fun(int a, int b)
{
	int n = 0;
	while (b>0)
	{
		n = a%b;
		a = b;
		b = n;
	}
	return a;
}
int main()
{
	printf("please enter 2 numbers: ");
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}
	int num = 0;
	num = fun(a, b);

	system("pause");
	return 0;
}