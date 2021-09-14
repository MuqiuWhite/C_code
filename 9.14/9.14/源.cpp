#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
__int64 fib(int n)
{
	__int64 a=0, b = 1, c=1;
	while (n > 2)
	{
		n -= 1;//第三个数：前面加1次（1+1=2），第四个数：前面加2次：（1+1=2,1+2=3）
		a = b;
		b = c;
		c = a + b;
	}
	return c;
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF&&n!=-1)
	{
		__int64 c=fib(n);
		printf("%I64d\n", c);
	}
	
	return 0;
}
#include<stdio.h>
#include<string.h>

int main() 
{
	int i, j;
	__int64 a[10000];
	while (scanf("%d", &i) != EOF&&i!=-1) 
	{
		a[0] = 0; 
		a[1] = 1;
		for (j = 2; j <= i; j++) 
		{
			a[j] = a[j - 1] + a[j - 2];
		}
		printf("%I64d\n", a[i]);
	}
	return 0;

}
//int n = 0;
//while (scanf("%d", &n) != EOF)
//{
//	while (n--)
//	{
//		int a[3] = { 0 }, b[3] = { 0 };
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (i = 0; i < 3; i++)
//		{
//			scanf("%d", &b[i]);
//		}

//		int c[3] = { 0 };
//		int e[3] = { 0 };
//		for (i = 2; i >=0 ; i--)
//		{
//			c[i] = a[i] + b[i];
//			int flag = 0;
//			int d = 0;
//			if (i > 0)
//			{
//				if (c[i] > 59)
//				{
//					d = c[i];
//					c[i]%=60;
//					d /= 60;
//					//int j = i;						
//					e[i - 1] += d;
//				}					
//			}
//		}
//		for (i = 0; i < 2; i++)
//		{
//			c[i] += e[i];
//		}
//		printf("%d %d %d\n", c[0], c[1], c[2]);
//	}


//}
/*int N1, R;
	char a[] = "ABCDEF";
	while (scanf("%d%d", &N1,&R) ==2)
	{
		getchar();
		int i = 0,c=0;
		int N = abs(N1);
		int res[33];
		while (N)
		{
			res[i] = N % R;
			N = N / R;
			i++;
		}

		if (N1 < 0)
		{
			printf("-");
		}
		int j;
		for (j = i-1; j >= 0; j--)
		{
			if (R > 10 && res[j] >= 10)
			{
				if (res[j] < 15)
				{
					c = res[j] % 5;
				}
				else
					c = 5;
				printf("%c", a[c]);

			}
			else
				printf("%d", res[j]);
		}
		printf("\n");

	}*/