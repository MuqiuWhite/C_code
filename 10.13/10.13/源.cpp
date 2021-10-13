#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int find(int a, int b)
{
	if (a%b==0)
	{
		return b;
	}
	else
	{
		return find(b, a % b);
	}
}
int main()
{
	int n, a, b,c;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d%d", &a, &b);
		for (c = 2 * b; ; c += b)//c从2b开始，一直是b的倍数
		{
			if (find(a, c) == b)//算算a和c的最大公约数是否是b
			{
				break;
			}
		}
		printf("%d\n", c);
	}
	return 0;
}
//#define max 1000001
//int s[max];
//int a = 0, i,j;
//
//int count = 0;	
//s[1] = 0;
//for (j = 2; j < max; j++)
//{

//		if (s[j] == 0)
//		{
//			
//			count++;
//			for (i = j; i < max; i += j)
//			{
//				s[i] = count;
//			}

//		}
//}
//	
//	while (scanf("%d", &a) != EOF)
//		printf("%d\n", s[a]);


//
//int main()
//{
//	int a = 0, i,j;
//	
//	int count = 0;	
//	s[1] = 0;
//	for (j = 2; j < 100000; j++)
//	{
//
//			if (s[j] == 0)
//			{
//				
//				count++;
//				for (i = j; i < 100000; i += j)
//				{
//					s[j] = count;
//				}
//
//			}
//	}
//		
//		while (scanf("%d", &a) != EOF)
//			printf("%d\n", s[a]);
//
//
//	
//
//	return 0;
//}