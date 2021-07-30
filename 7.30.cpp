#define _CRT_SECURE_NO_WARNINGS 1
//int diff(int a)
/*{
	int i = 0, r[32] = { 0 };
	while (a / 2)
	{
		r[i] = a % 2;
		a = a / 2;
	}
	return r*/;
//}
#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	int i;
	for (i=0;i<3;i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}

//int a[10] = { 8,3,5,6,4,1,2,9,-1,0 };
//int i = 0;
//int j = 0;
//int flag = 1;
//for (i = 0; i < 9; i++)
//{
//	flag = 1;
//	for (j = 0; j < 9 - i; j++)
//	{
//		if (a[j] > a[j+1])
//		{
//			int temp = a[j];
//			a[j] = a[j+1];
//			a[j+1] = temp;
//			flag = 0;
//		}
//	}
//	if (flag == 1)
//		break;
//}

//for (i = 0; i < 10; i++)
//{
//	printf("%d ", a[i]);
//}

//int a = 2, b = 5;
//a = a + b;
//b = a - b;
//a = a - b;
//printf("%d %d", a, b);
/*int n = 15;
int i = 0;
int count = 0;
for (i = 0; i < 32; i++)
{
	if (((n >> i) & 1) == 1)
		 {
		 count++;
		 }
}*/
//int a = 0, i = 0;
//while (scanf("%d", &a) != EOF)
//{
//	int r[32] = { 0 };
//	int j[32] = { 0 };
//
//	for (i = 31; a != 0; i--)
//	{
//		r[i] = a % 2;
//		a = a / 2;
//
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 != 0)
//			j[i] = r[i];
//		else
//			j[i] = r[i];
//	}
//	printf("Å¼Êý£º");
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//			printf("%d ", j[i]);
//	}
//	printf("\nÆæÊý£º");
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d ", j[i]);
//	}
//	printf("\n");
//
//}
//int m, n;
//while (scanf("%d%d", &m, &n) != EOF)
//{
//	int i = 0, r[32] = { 0 }, s[32] = {0};
//	int count = 0;
//	for(i=31;m!=0;i--)
//	{
//		r[i] = m % 2;
//		m = m / 2;		
//	}

//	for (i = 31; n !=0; i--)
//	{
//		s[i] = n % 2;
//		n = n / 2;
//	}
//	int j = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if (r[j] != s[j])
//			count++;
//	}
//	printf("%d\n", count);
//}