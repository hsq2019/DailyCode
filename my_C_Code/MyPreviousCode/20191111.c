#pragma warning(disable:4996)
//#include<stdio.h>
//#include<windows.h>
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	/*while (value > 0)
//	{
//		if (value & 1 == 1)
//		{
//			count++;
//		}
//		value = value >> 1;
//	}*/
//	while (value)
//	{
//		value = value&(value - 1);
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int unsigned n=0;
//	printf("please enter number: ");
//	scanf("%d",&n);
//	int res=count_one_bits(n);
//	printf("���� %d ������1�ĸ���Ϊ %d \n",n,res);
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int n = 0;
//	printf("please enter number: ");
//	scanf("%d", &n);
//	int i = 0;
//	printf("����λΪ�� ");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż����Ϊ�� ");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int n = 0;
//	printf("please enter number: ");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (n >> i)&1);
//	}
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<windows.h>

int main()
{
	int n = 0, m = 0;
	printf("please enter numbers <n,m> ");
	scanf("%d %d", &n, &m);
	int i=0;
	int count = 0;
	for (i = 31; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;
		}
	}
	printf("%d��%d�����Ʊ���У���%dλ��ͬ\n",n,m,count);
	system("pause");
	return 0;
}