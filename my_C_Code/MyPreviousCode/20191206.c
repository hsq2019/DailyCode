#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	int a[] = { 1, 1, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7 };
	int size = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = 0;
	int count = 0;
	for (; i < size; i++)
	{
		count = 0;
		for (; j < size; j++)
		{
			if ((a[i] == a[j]) && (i!=j))
			{
				break;
			}
		}
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}