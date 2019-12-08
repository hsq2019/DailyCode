#include<stdio.h>
#include<windows.h>

int main()
{
	int i = 1;
	int j = 1;
	for (; i <= 13; i += 2)
	{
		for (; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}