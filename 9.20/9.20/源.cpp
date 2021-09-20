#define _CRT_SECURE_NO_WARNINGS 1

//void* my_memmove(void* a, const void* b,int sz )
//{
//	void* ret = a;
//	if (a < b)//从前向后
//	{
//		while (sz--)
//		{
//			*(char*)a = *(char*)b;
//			a= (char*)a+1;
//			b= (char*)b+1;
//		}
//	}
//	else//从后向前
//	{
//		while (sz--)
//		{
//			*((char*)a+sz) = *((char*)b+sz);
//		}
//	}
//	return a;
//}

#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0, b = 0;
	while (scanf("%d%d", &a, &b) != EOF && a != 0 && b != 0)
	{
		int i = 0, flag = 1;
		for (i = 0; i < 100; i++)
		{		
			int c=(a * 100 + i);
			if (c% b == 0)
			{
				if (flag == 0)
					printf(" ");
				printf("%02d", i);
				flag = 0;
				
			}
		}
		printf("\n");
	}
	return 0;
}
//int a = 0,i = 0,j=0;
//while (scanf("%d", &a) != EOF && a != 0)
//{
//	a = abs(a);
//	int c[10000] = { 0 };
//	int count = 0;
//	for (j = 2; j <= a; j++)
//	{
//		for (i = 2; i < sqrt(j); i++)
//		{
//			if (j % i == 0)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(j))
//		{
//			c[count] = j;
//			count++;
//		}
//	}
//	int flag = 0;
//	for (i = 0; i < count-1; i++)
//	{
//		for (j = i+1; j < count; j++)
//		{
//			if (c[i] + c[j] == a)
//			{
//				flag++;
//			}
//		}
//	}
//	printf("%d\n", flag);
//}
//int a = 0;
//while (scanf("%d", &a) != EOF && a != 0)
//{
//	
//	if (change(a, 10) ==  change(a, 12) && change(a, 16) == change(a, 10))
//		printf("%d is a Sky Number.\n", a);
//	else
//		printf("%d is not a Sky Number.\n", a);
//}
//int change(int a,int s)
//{
//	
//	int g = 0, sum = 0;
//	while (a)
//	{
//		g = a % s;
//		a = a / s;
//		sum = sum + g;
//	}
//	return sum;
//}
//int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//my_memmove(a+2,a,20);
//for (int i = 0; i < 10; i++)
//{
//	printf("%d  ", a[i]);
//}